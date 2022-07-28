#include "NAQH.hpp"

void Debug::log(std::string p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message << std::endl;
}

void Debug::log(Math::Vector2 p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message.x << ", " << p_message.y << std::endl;
}

void Debug::log(Math::Vector3 p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message.x << ", " << p_message.y << ", " << p_message.z << std::endl;
}

void Debug::log(Math::Vector4 p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message.x << ", " << p_message.y << ", " << p_message.z << ", " << p_message.w << std::endl;
}

void Debug::log(int p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message << std::endl;
}

void Debug::log(float p_message, Severity p_severity)
{
    std::string Severity_txt[] = {"Debug", "Info", "Warning", "Critical", "Fatal"};
    std::cout << Severity_txt[p_severity] << ": " << p_message << std::endl;
}