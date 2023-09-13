#!/bin/bash

# It greets the user, displays your name, surname, SID,
# mentions the class name, and the current date and time,
# as well as references week 3 homework.
# Additionally, it creates a folder named "week3" and
# writes data to a file named "data.txt" inside it.

# Record the start time
start_time=$(date +%s)

# User information
name="Jamshidjon"
surname="Ganiev"
sid="12200335"

# Class information
class="Smart Mobility Engineering Lab"

# Homework information
week="Week 3"

# Get the current date and time
current_datetime=$(date +"%Y-%m-%d %H:%M:%S")

# Greet the user with personalized information
echo "Hello, $name $surname!"
echo "Student ID: $sid"
echo "Class: $class"
echo "$week Homework:"
echo "Current date and time: $current_datetime"

# Create a folder named "week3" if it doesn't exist
if [ ! -d "week3" ]; then
  mkdir week3
fi

# Create and write data to a file named "data.txt" inside the "week3" folder
data="This is some sample data that we're writing to data.txt."
echo "$data" > week3/data.txt

# Display the size of the file
file_size=$(du -h week3/data.txt | awk '{print $1}')
echo "File size of 'data.txt': $file_size"

# Record the end time
end_time=$(date +%s)

# Calculate and display the total execution time
execution_time=$((end_time - start_time))
echo "Total execution time: $execution_time seconds"

# Provide a confirmation message
echo "Created folder 'week3' and wrote data to 'data.txt'."

# End of the script
