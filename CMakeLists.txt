cmake_minimum_required(VERSION 3.10)
project(TestBoostFindPackage)

find_package(Eigen3 REQUIRED NO_MODULE)

# 打印找到的变量
message(STATUS "Eigen3_INCLUDE_DIRS: ${Eigen3_INCLUDE_DIRS}")
message(STATUS "Eigen3_LIBRARIES: ${Eigen3_LIBRARIES}")
message(STATUS "Eigen3_SYSTEM_FOUND: ${Eigen3_SYSTEM_FOUND}")
message(STATUS "Eigen3_FILESYSTEM_FOUND: ${Eigen3_FILESYSTEM_FOUND}")
message(STATUS "CMake Module Path1: ${CMAKE_MODULE_PATH}")

# 查找 Boost 的 system 和 filesystem 组件
FIND_PACKAGE(Boost REQUIRED COMPONENTS system filesystem NO_MODULE)

# 打印找到的变量
MESSAGE(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_SYSTEM_FOUND: ${Boost_SYSTEM_FOUND}")
message(STATUS "Boost_FILESYSTEM_FOUND: ${Boost_FILESYSTEM_FOUND}")
message(STATUS "CMake Module Path2: ${CMAKE_MODULE_PATH}")


add_executable(test_boost src/main.cpp)
target_include_directories(test_boost PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(test_boost PRIVATE ${Boost_LIBRARIES})
