//OpenGL_main.cpp
//Justyn Durnford
//Created on 2/16/2020
//Last Updated on 2/16/2020
//

#include <GLFW/glfw3.h>

#include <ostream>
using std::ostream;

ostream os;

void error_callback(int error, const char* description)
{
	os << "Error: %s\n", description;
}

GLFWwindow* create_window(int length, int height, const char* title)
{
	GLFWwindow* window = glfwCreateWindow(length, height, title, NULL, NULL);

	if (!window) //Window failed
	{

	}
}

int main()
{
	glfwSetErrorCallback(error_callback);
	if (!glfwInit()) //Initialization failed
	{
		
	}


	return 0;
}