#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "smart_home_cpp/srv/appliance_control.hpp"

// Define a class for the Appliance Server node
class ApplianceServer : public rclcpp::Node
{
public:
    // Alias for the ApplianceControl action
    using ApplianceControl = smart_home_cpp::action::ApplianceControl;
    using GoalHandle = rclcpp_action::ServerGoalHandle<ApplianceControl>;

    // Constructor for the Appliance Server
    ApplianceServer()
        : Node("appliance_server"), // Initialize the node with the name "appliance_server"
          action_server_(rclcpp_action::create_server<ApplianceControl>(
              this, "appliance_control", // Create an action server for ApplianceControl
              std::bind(&ApplianceServer::handle_goal, this, std::placeholders::_1))) // Bind the goal handler
    {
    }

private:
    rclcpp_action::Server<ApplianceControl>::SharedPtr action_server_;

    // Method to handle a goal received by the action server
    void handle_goal(const GoalHandle &goal_handle)
    {
        // Get the appliance name and desired state from the goal
        const std::string &appliance_name = goal_handle->get_goal()->appliance;
        const bool is_turning_on = goal_handle->get_goal()->on;

        // Implement the logic to control the appliance based on the goal
        bool success = control_appliance(appliance_name, is_turning_on);

        if (success)
        {
            // If the control operation was successful, set the result
            auto result = std::make_shared<ApplianceControl::Result>();
            result->success = true;
            goal_handle.succeed(result); // Mark the goal as succeeded
        }
        else
        {
            // If the control operation failed, abort the goal
            goal_handle.abort(); // Mark the goal as aborted
        }
    }

    // Method to simulate appliance control logic
    bool control_appliance(const std::string &appliance_name, bool is_turning_on)
    {
        // Implement the logic to control the appliance here.
        // Return true if the control operation was successful, false otherwise.

        // You can add specific code to turn appliances on or off based on appliance_name.
        // For this example, we will assume all operations are successful.
        return true;
    }
};

// Main function to initialize and run the ApplianceServer node
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv); // Initialize the ROS 2 node
    rclcpp::spin(std::make_shared<ApplianceServer>()); // Create an instance of ApplianceServer and spin it
    rclcpp::shutdown(); // Shutdown the ROS 2 node
    return 0;
}
