cmake_minimum_required(VERSION 3.21)
project(gametest)

set(CMAKE_CXX_STANDARD 14)

add_library(glad "3rdparty/glad/include/glad/glad.h" "3rdparty/glad/src/glad.c")
target_include_directories(glad PUBLIC 3rdparty/glad/include)

#set(SOURCE_FILES main.cpp 3rdparty/glad/src/glad.c)
#include_directories(3rdparty/glad/include)
add_executable(gametest main_linux.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw glad)
