#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "smart_home_cpp/srv/appliance_control.hpp"

// Define a class for the Appliance Client node
class ApplianceClient : public rclcpp::Node
{
public:
    // Alias for the ApplianceControl action
    using ApplianceControl = smart_home_cpp::action::ApplianceControl;

    // Constructor for the Appliance Client
    ApplianceClient()
        : Node("appliance_client"), // Initialize the node with the name "appliance_client"
          action_client_(rclcpp_action::create_client<ApplianceControl>(
              this, "appliance_control")) // Create an action client for ApplianceControl
    {
    }

    // Method to run the Appliance Client
    void run()
    {
        // Wait for the action server to become available
        while (!action_client_->wait_for_action_server(std::chrono::seconds(1)))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(get_logger(), "Action server not available after waiting");
                return;
            }
            RCLCPP_INFO(get_logger(), "Waiting for the action server to be available...");
        }

        // Display a list of appliances and prompt the user to select one
        RCLCPP_INFO(get_logger(), "List of Appliances:");
        RCLCPP_INFO(get_logger(), "0. List Appliances");
        RCLCPP_INFO(get_logger(), "1. TV");
        RCLCPP_INFO(get_logger(), "2. Fridge");
        RCLCPP_INFO(get_logger(), "3. Boiler");
        RCLCPP_INFO(get_logger(), "4. Air Conditioner");
        RCLCPP_INFO(get_logger(), "5. Lights");

        int choice = 0;
        std::string appliance_name;

        while (choice != -1)
        {
            RCLCPP_INFO(get_logger(), "Enter the number of the appliance to control (-1 to exit): ");
            std::cin >> choice;

            if (choice == -1)
            {
                break;
            }

            if (choice < 0 || choice > 5)
            {
                RCLCPP_INFO(get_logger(), "Invalid choice. Try again.");
                continue;
            }

            if (choice == 0)
            {
                // Request to list appliances
                RCLCPP_INFO(get_logger(), "Requesting the list of appliances...");
                send_goal("", false);
            }
            else
            {
                // Prompt the user to turn on or off the selected appliance
                appliance_name = get_appliance_name(choice);
                if (!appliance_name.empty())
                {
                    int on;
                    RCLCPP_INFO(get_logger(), "Do you want to turn on or off the %s (1 for on, 0 for off)? ", appliance_name.c_str());
                    std::cin >> on;
                    send_goal(appliance_name, static_cast<bool>(on));
                }
            }
        }
    }

private:
    rclcpp_action::Client<ApplianceControl>::SharedPtr action_client_;

    // Method to send a goal to control an appliance
    void send_goal(const std::string &appliance, bool on)
    {
        auto goal = ApplianceControl::Goal();
        goal.appliance = appliance;
        goal.on = on;

        RCLCPP_INFO(get_logger(), "Sending goal...");
        auto send_goal_options = rclcpp_action::Client<ApplianceControl>::SendGoalOptions();
        send_goal_options.goal_response_callback = [this](std::shared_future<rclcpp_action::ClientGoalHandle<ApplianceControl>::SharedPtr> future) {
            auto goal_handle = future.get();
            if (!goal_handle)
            {
                RCLCPP_INFO(get_logger(), "Goal was rejected by the server");
            }
            else
            {
                RCLCPP_INFO(get_logger(), "Goal accepted by the server, waiting for result...");
            }
        };
        send_goal_options.feedback_callback = [this](rclcpp_action::ClientGoalHandle<ApplianceControl>::SharedPtr goal_handle,
                                                    const std::shared_ptr<const ApplianceControl::Feedback> feedback) {
            RCLCPP_INFO(get_logger(), "Received feedback: %s", feedback->feedback.c_str());
        };
        send_goal_options.result_callback = [this](const rclcpp_action::ClientGoalHandle<ApplianceControl>::WrappedResult &result) {
            switch (result.code)
            {
            case rclcpp_action::ResultCode::SUCCEEDED:
                RCLCPP_INFO(get_logger(), "Goal succeeded: %s", result.result->success ? "Success" : "Failure");
                break;
            case rclcpp_action::ResultCode::ABORTED:
                RCLCPP_INFO(get_logger(), "Goal was aborted");
                break;
            default:
                RCLCPP_ERROR(get_logger(), "Unknown result code");
                break;
            }
        };

        auto future_goal_handle = action_client_->async_send_goal(goal, send_goal_options);
    }

    // Method to get the appliance name based on the user's choice
    std::string get_appliance_name(int choice)
    {
        switch (choice)
        {
        case 1:
            return "TV";
        case 2:
            return "Fridge";
        case 3:
            return "Boiler";
        case 4:
            return "Air Conditioner";
        case 5:
            return "Lights";
        default:
            return "";
        }
    }
};

// Main function to initialize and run the ApplianceClient node
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv); // Initialize the ROS 2 node
    auto node = std::make_shared<ApplianceClient>(); // Create an instance of the ApplianceClient node
    node->run(); // Run the ApplianceClient
    rclcpp::shutdown(); // Shutdown the ROS 2 node
    return 0;
}
