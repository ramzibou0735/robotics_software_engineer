cmake_minimum_required(VERSION 3.10)
project(module_2_assignment)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

# Add the executable
add_executable(logarithmic_curve_node src/task1_2.cpp)
add_executable(draw_circle_node src/task1_1.cpp)
add_executable(back_and_forth_node src/task3.cpp)
add_executable(task4 src/task4.cpp)

# Link against ROS 2 libraries
ament_target_dependencies(logarithmic_curve_node rclcpp geometry_msgs)
ament_target_dependencies(draw_circle_node rclcpp geometry_msgs)
ament_target_dependencies(back_and_forth_node rclcpp geometry_msgs)
ament_target_dependencies(task4 rclcpp geometry_msgs)
# Install the executable
install(TARGETS
  logarithmic_curve_node
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  draw_circle_node
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  back_and_forth_node
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task4
  DESTINATION lib/${PROJECT_NAME}
)
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)


# Enable testing (optional)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Finalize package
ament_package()