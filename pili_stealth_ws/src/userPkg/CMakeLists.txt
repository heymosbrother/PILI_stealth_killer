cmake_minimum_required(VERSION 3.8)
project(userPkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(more_interfaces REQUIRED)

add_executable(command_service_server src/command_service_server.cpp)
ament_target_dependencies(command_service_server rclcpp more_interfaces)

add_executable(command_service_client src/command_service_client.cpp)
ament_target_dependencies(command_service_client rclcpp more_interfaces)

install(TARGETS
  command_service_server
  command_service_client
  DESTINATION lib/${PROJECT_NAME})

ament_package()