#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cerrno>
#include <math.h>
#include <GLFW/glfw3.h>
#include <glad/glad.h> 

#include "Core/Entity.hpp"
#include "Math/Math.hpp"
#include "Debug/Debug.hpp"
#include "Event/Input.hpp"
#include "Graphic/Window.hpp"
#include "Graphic/Shader.hpp"
#include "Graphic/VBO.hpp"
#include "Physics/Physics.hpp"

using namespace NAQH;
using namespace Graphic;
using namespace Math;
using namespace Physics;
using namespace Debug;