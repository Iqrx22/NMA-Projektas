#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

#include<string>

const int WINDOW_LENGTH = 800, WINDOW_HEIGHT = 800;


int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWindow* window = glfwCreateWindow(WINDOW_LENGTH, WINDOW_HEIGHT, "FlappyBird", NULL, NULL);
	if (window == NULL) {
		std::cout << "Nesukure window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwTerminate();
	return 0;
}