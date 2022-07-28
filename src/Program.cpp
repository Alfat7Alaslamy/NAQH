#include "NAQH.hpp"

int main()
{
    Window window("NAQH v0.1", 680, 840);

    while (!window.Closed())
    {
        window.Clear();
        
        window.Update();
    }
    
}