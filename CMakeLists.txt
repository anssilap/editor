cmake_minimum_required(VERSION 3.21)
project(editor)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dependencies)

enable_testing()
add_subdirectory(test)

add_library(glad "3rdparty/glad/include/glad/glad.h" "3rdparty/glad/src/glad.c")
target_include_directories(glad PUBLIC 3rdparty/glad/include)

include_directories(3rdparty/glfw/include)
link_directories(3rdparty/glfw/lib-vc2019)

add_executable(editor main.cpp color.h)

IF(WIN32)
    #add_executable(gametest main_windows.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC glfw3 glad)
ELSEIF(APPLE)
    # Dunno what to do
ELSE()
    #add_executable(gametest main_linux.cpp)
    target_link_libraries(${PROJECT_NAME} PUBLIC glfw glad)
ENDIF()
