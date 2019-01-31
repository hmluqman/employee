cmake_minimum_required(VERSION 3.10)

project(employee)

set (CMAKE_CXX_STANDARD 11)

include_directories($(CMAKE_CURRENT_SOURCE_DIR)/include)


add_library(employee SHARED src/Employee.cpp src/SalariedEmployee.cpp src/CommissionEmployee.cpp src/BasePlusCommissionEmployee.cpp)

add_executable(fig12 src/fig12_19.cpp)
target_link_libraries(fig12 employee)
