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
    GLFWwindow* window;
    int success = 0;

    success = glfwInit();
    if (!success)
    {
        std::cout << "GLFW failed to init" << std::endl;
    }

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        std::cout << "GLFW failed create window" << std::endl;
    }
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    while (!glfwWindowShouldClose(window)){
        glClearColor(1,0,1,1);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    std::cout << "Hello from linux!" << std::endl;
    return 0;
}
