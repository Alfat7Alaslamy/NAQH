#pragma once
#include "NAQH.hpp"

namespace NAQH{namespace Debug
{
    enum Severity
    {
        Debug,
        Info,
        Warning ,
        Critical ,
        Fatal
    };

    void log(std::string p_message, Severity p_severity);
    void log(Math::Vector2 p_message, Severity p_severity);
    void log(Math::Vector3 p_message, Severity p_severity);
    void log(Math::Vector4 p_message, Severity p_severity);
    void log(int p_message, Severity p_severity);
    void log(float p_message, Severity p_severity);
}}