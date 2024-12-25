#include <GLFW/glfw3.h>
#include <app.hpp>

namespace engine {
    
    void App::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}
