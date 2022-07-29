#pragma once
#include "NAQH.hpp"

std::string getFileContents(const char* fileName);

class Shader
{
public:
    GLuint ID;
    Shader(const char* vertexFile, const char* fragmentFile);

    void Activate();
    void Delete();
};