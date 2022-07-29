#pragma once
#include "NAQH.hpp"

class VBO
{
public:
    GLuint ID;
    VBO(GLfloat* vertices, GLsizeiptr size);

    void Bind();
    void UnBind();
    void Delete();
};