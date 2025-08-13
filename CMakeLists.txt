cmake_minimum_required(VERSION 3.10)
project(TestBoostFindPackage)

# 查找 Boost 的 system 和 filesystem 组件
find_package(Boost REQUIRED COMPONENTS system filesystem NO_MODULE)

# 打印找到的变量
message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_SYSTEM_FOUND: ${Boost_SYSTEM_FOUND}")
message(STATUS "Boost_FILESYSTEM_FOUND: ${Boost_FILESYSTEM_FOUND}")

add_executable(test_boost src/main.cpp)
target_include_directories(test_boost PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(test_boost PRIVATE ${Boost_LIBRARIES})
