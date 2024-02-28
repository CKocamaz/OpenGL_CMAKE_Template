#include <main.h>
#include <../../Dependencies/glew/include/GL/glew.h>
#include <../../Dependencies/glfw/include/GLFW/glfw3.h>

int main(){

    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    return 0;
}