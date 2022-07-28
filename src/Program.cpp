#include "NAQH.hpp"

int main()
{
    Window window("NAQH v0.1", 800, 600);
    glClearColor(0.2f, 0.6f, 0.8f, 1.0f);

    while (!window.Closed())
    {
        window.Clear();
        glBegin(GL_QUADS);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
        glEnd();
        window.Update();
    }
    
}