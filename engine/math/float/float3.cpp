#include "float3.h"

namespace u2
{
    Float3::Float3(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Float3::~Float3()
    {
    }

    Float3 Float3::operator+(const Float3 &f3)
    {
        this->x += f3.x;
        this->y += f3.y;
        this->z += f3.z;
        return *this;
    }

    Float3 Float3::operator-(const Float3 &f3)
    {
        this->x -= f3.x;
        this->y -= f3.y;
        this->z -= f3.z;
        return *this;
    }

    Float3 Float3::operator*(const float &f)
    {
        this->x *= f;
        this->y *= f;
        this->z *= f;
        return *this;
    }

    Float3 Float3::operator/(const float &f)
    {
        this->x /= f;
        this->y /= f;
        this->z /= f;
        return *this;
    }
}
