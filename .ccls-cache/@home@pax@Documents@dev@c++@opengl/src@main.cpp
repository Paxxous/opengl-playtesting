#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>


// An error callback, a way of displaying our errors to the console
void errorCallback(int error, const char* description) {
  std::cout << "Error " << error << ",\n" << description << std::endl;
}

// We're going to try out opengl :DDD
int main() {
  glfwSetErrorCallback(errorCallback); 
  if (!glfwInit()) {
    
  }


  glfwTerminate(); // KILL GLFW (╯°□°)╯︵ ┻━┻
}
