#include "NAQH.hpp"

namespace NAQH
{
    namespace Graphic
    {
        void WindowResize(GLFWwindow *p_window, int p_width, int p_height);

        Window::Window(const char *p_title, int p_width, int p_height)
        {
            title = p_title;
            width = p_width;
            height = p_height;
            Init();

            if (!Init())
                glfwTerminate();
        }

        Window::~Window()
        {
            glfwTerminate();
        }

        bool Window::Init()
        {
            if (!glfwInit())
            {
                Debug::log("Failed to initialize GLFW", Debug::Fatal);
                return false;
            }
            
            window = glfwCreateWindow(width, height, title, NULL, NULL);
            if(!window)
            {
                glfwTerminate();
                Debug::log("Failed to create glfw window", Debug::Fatal);
                return false;
            }
            glfwMakeContextCurrent(window);
            gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
            glfwSetWindowSizeCallback(window, WindowResize);
            return true;
        }

        void Window::Clear() const
        {
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        }

        void Window::Update()
        {
            glfwPollEvents();
            glfwGetFramebufferSize(window, &width, &height);
            glfwSwapBuffers(window);
        }

        bool Window::Closed() const
        {
            return glfwWindowShouldClose(window) == 1;
        }

        void WindowResize(GLFWwindow *p_window, int p_width, int p_height)
        {
            glViewport(0, 0, p_width, p_height);
        }
    }
}