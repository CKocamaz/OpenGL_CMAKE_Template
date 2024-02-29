#include <main.h>
#include <../../Dependencies/glew/include/GL/glew.h>
#include <../../Dependencies/glfw/include/GLFW/glfw3.h>

int main(){

	glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  

	GLFWwindow* window = glfwCreateWindow(800, 600, "Pencere", NULL, NULL);
	if (window == NULL)
	{
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    return -1;
	}

	glfwMakeContextCurrent(window);

	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	while(!glfwWindowShouldClose(window))
	{
		
		glfwPollEvents();    
	}

	glfwTerminate();
    return 0;
}