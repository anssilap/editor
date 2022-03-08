#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
//#include "3rdparty/glad/include/glad/glad.h"
#include <glad/glad.h>
//#include "3rdparty/glad/include/glad.h"
#include <iostream>

// TODO
//  - Install glad
//  - Render quad
//  - Render texture on quad
//  - Do some particle effect using shaders at cursor

int main() {
    int init_result = glfwInit();
    if (!init_result)
    {
        std::cout << "GLFW failed to init!" << std::endl;
    }

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glfwTerminate();
    std::cout << "Hello from linux!" << std::endl;
    return 0;
}

