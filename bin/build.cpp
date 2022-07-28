#include <iostream>

int main()
{
    std::string type;

    std::cout << "Write the type: ";
    std::cin >> type;

    if (type == "Debug" || type == "debug" || type == "1")
        system("g++ -c src/*.cpp src/core/*.cpp src/Debug/*.cpp src/Graphic/*.cpp src/Event/*.cpp src/Math/*.cpp src/Physics/*.cpp -std=c++14 -g -Wall -m64 -I external -I src && g++ *.o -L external/GLFW -L external/glad -lglad -lglfw3 -lopengl32 -lgdi32 -o bin/Debug/Program && start bin/Debug/Program");
    else if (type == "Release" || type == "release" || type == "2")
        system("g++ -c src/*.cpp src/core/*.cpp src/Debug/*.cpp src/Graphic/*.cpp src/Event/*.cpp src/Math/*.cpp src/Physics/*.cpp -std=c++14 -O3 -Wall -m64 -I external -I src && g++ *.o -L external/GLFW -L external/glad -lglad -lglfw3 -lopengl32 -lgdi32 -o bin/Release/Program -s && start bin/Release/Program");
    else if (type == "Dev" || type == "dev" || type == "3")
        system("g++ -c src/*.cpp src/core/*.cpp src/Debug/*.cpp src/Graphic/*.cpp src/Event/*.cpp src/Math/*.cpp src/Physics/*.cpp -std=c++14 -O3 -Wall -m64 -I external -I src && g++ *.o -L external/GLFW -L external/glad -lglad -lglfw3 -lopengl32 -lgdi32 -o bin/Dev/Program -s && start bin/Dev/Program");

    //system("pause");
    return 0;
}