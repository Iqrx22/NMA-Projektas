#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

#include<string>

const int WINDOW_LENGTH = 800, WINDOW_HEIGHT = 800;


int main() {
	//Initialising GLFW
	glfwInit();
	//Using GLFW version 3,3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Creating a window which name is FlappyBird
	GLFWwindow* window = glfwCreateWindow(WINDOW_LENGTH, WINDOW_HEIGHT, "FlappyBird", NULL, NULL);
	if (window == NULL) {
		std::cout << "Nesukure window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();
	glViewport(0, 0, WINDOW_LENGTH, WINDOW_HEIGHT);

	glClearColor(0.07f, 0.13f, 1.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}