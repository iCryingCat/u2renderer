#include "float2.h"

namespace u2
{
    Float2 Float2::operator+(const Float2 &f2)
    {
        this->x += f2.x;
        this->y += f2.y;
        return *this;
    }

    Float2 Float2::operator-(const Float2 &f2)
    {
        this->x -= f2.x;
        this->y -= f2.y;
        return *this;
    }

    Float2 Float2::operator*(const float &f)
    {
        this->x *= f;
        this->y *= f;
        return *this;
    }

    Float2 Float2::operator/(const float &f)
    {
        this->x /= f;
        this->y /= f;
        return *this;
    }
}