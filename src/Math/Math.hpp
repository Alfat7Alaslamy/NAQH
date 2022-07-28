#pragma once
#include "NAQH.hpp"

namespace NAQH{namespace Math{
    struct Vector2
    {
        Vector2()
        :x(0.0f), y(0.0f) {}

        Vector2(float p_x, float p_y)
        :x(p_x), y(p_y) {}

        Vector2 one()
        {
            return Vector2(1.0f, 1.0f);
        }

        Vector2 zero()
        {
            return Vector2(0.0f, 0.0f);
        }

        Vector2 up()
        {
            return Vector2(0.0f, 1.0f);
        }

        Vector2 down()
        {
            return Vector2(0.0f, -1.0f);
        }

        Vector2 right()
        {
            return Vector2(1.0f, 0.0f);
        }

        Vector2 left()
        {
            return Vector2(-1.0f, 0.0f);
        }

        Vector2 operator+(Vector2 other)
        {
            return Vector2(x + other.x, y + other.y);
        }

        Vector2 operator-(Vector2 other)
        {
            return Vector2(x - other.x, y - other.y);
        }

        Vector2 operator*(Vector2 other)
        {
            return Vector2(x * other.x, y * other.y);
        }

        Vector2 operator/(Vector2 other)
        {
            return Vector2(x / other.x, y / other.y);
        }

        bool operator==(Vector2 other)
        {
            if (x == other.x && y == other.y)
            {
                return true;
            }

            return false;
        }

        bool operator!=(Vector2 other)
        {
            if (x != other.x || y != other.y)
            {
                return true;
            }

            return false;
        }

        bool operator>(Vector2 other)
        {
            if (x > other.x || y > other.y)
            {
                return true;
            }

            return false;
        }

        bool operator<(Vector2 other)
        {
            if (x < other.x || y < other.y)
            {
                return true;
            }

            return false;
        }

        bool operator>=(Vector2 other)
        {
            if (x >= other.x || y >= other.y)
            {
                return true;
            }

            return false;
        }

        bool operator<=(Vector2 other)
        {
            if (x <= other.x || y <= other.y)
            {
                return true;
            }

            return false;
        }

        float x, y, magnitude;
    };

    struct Vector3
    {
        Vector3()
        :x(0.0f), y(0.0f), z(0.0f) {}

        Vector3(float p_x, float p_y, float p_z)
        :x(p_x), y(p_y), z(p_z) {}

        Vector3 one()
        {
            return Vector3(1.0f, 1.0f, 1.0f);
        }

        Vector3 zero()
        {
            return Vector3(0.0f, 0.0f, 0.0f);
        }

        Vector3 forward()
        {
            return Vector3(0.0f, 0.0f, 1.0f);
        }

        Vector3 back()
        {
            return Vector3(0.0f, 0.0f, -1.0f);
        }

        Vector3 up()
        {
            return Vector3(0.0f, 1.0f, 0.0f);
        }

        Vector3 down()
        {
            return Vector3(0.0f, -1.0f, 0.0f);
        }

        Vector3 right()
        {
            return Vector3(1.0f, 0.0f, 0.0f);
        }

        Vector3 left()
        {
            return Vector3(-1.0f, 0.0f, 0.0f);
        }
        
        Vector3 operator+(const Vector3& other)
        {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }

        Vector3 operator-(const Vector3& other)
        {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }

        Vector3 operator*(const Vector3& other)
        {
            return Vector3(x * other.x, y * other.y, z * other.z);
        }

        Vector3 operator/(const Vector3& other)
        {
            return Vector3(x / other.x, y / other.y, z / other.z);
        }

        bool operator==(Vector3 other)
        {
            if (x == other.x && y == other.y && z == other.z)
            {
                return true;
            }

            return false;
        }

        bool operator!=(Vector3 other)
        {
            if (x != other.x || y != other.y || z != other.z)
            {
                return true;
            }

            return false;
        }

        bool operator>(Vector3 other)
        {
            if (x > other.x || y > other.y || z > other.z)
            {
                return true;
            }

            return false;
        }

        bool operator<(Vector3 other)
        {
            if (x < other.x || y < other.y || z < other.z)
            {
                return true;
            }

            return false;
        }

        bool operator>=(Vector3 other)
        {
            if (x >= other.x || y >= other.y || z >= other.z)
            {
                return true;
            }

            return false;
        }

        bool operator<=(Vector3 other)
        {
            if (x <= other.x || y <= other.y || z <= other.z)
            {
                return true;
            }

            return false;
        }

        float x, y, z, magnitude;
    };

    struct Vector4
    {
        Vector4()
        :x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

        Vector4(float p_x, float p_y, float p_z, float p_w)
        :x(p_x), y(p_y), z(p_z), w(p_w) {}

        Vector4 one()
        {
            return Vector4(1.0f, 1.0f, 1.0f, 1.0f);
        }

        Vector4 zero()
        {
            return Vector4(0.0f, 0.0f, 0.0f, 0.0f);
        }

        Vector4 operator+(const Vector4& other)
        {
            return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
        }

        Vector4 operator-(const Vector4& other)
        {
            return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
        }

        Vector4 operator*(const Vector4& other)
        {
            return Vector4(x * other.x, y * other.y, z * other.z, w * other.w);
        }

        Vector4 operator/(const Vector4& other)
        {
            return Vector4(x / other.x, y / other.y, z / other.z, w / other.w);
        }

        bool operator==(Vector4 other)
        {
            if (x == other.x && y == other.y && z == other.z && w == other.w)
            {
                return true;
            }

            return false;
        }

        bool operator!=(Vector4 other)
        {
            if (x != other.x || y != other.y || z != other.z || w != other.z)
            {
                return true;
            }

            return false;
        }

        bool operator>(Vector4 other)
        {
            if (x > other.x || y > other.y || z > other.z || w > other.w)
            {
                return true;
            }

            return false;
        }

        bool operator<(Vector4 other)
        {
            if (x < other.x || y < other.y || z < other.z || w < other.w)
            {
                return true;
            }

            return false;
        }

        bool operator>=(Vector4 other)
        {
            if (x >= other.x || y >= other.y || z >= other.z || w >= other.w)
            {
                return true;
            }

            return false;
        }

        bool operator<=(Vector4 other)
        {
            if (x <= other.x || y <= other.y || z <= other.z || w <= other.w)
            {
                return true;
            }

            return false;
        }

        float x, y, z, w, magnitude;
    };
}}