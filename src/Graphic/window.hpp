#pragma once

namespace NAQH
{
    namespace Graphic
    {
        class Window
        {
        private:
            const char *title;
            int width, height;
            GLFWwindow* window;
            bool closed;
        public:
            Window(const char *p_title, int p_width, int p_height);
            ~Window();
            bool Closed() const;
            void Update();
            void Clear() const;

            inline int getWidth() const { return width; }
            inline int getHeight() const {return height; }
        private:
            bool Init();
        };
    }
}