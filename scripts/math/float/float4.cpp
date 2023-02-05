#include "Float4.h"

namespace u2
{
    Float4::Float4(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Float4::~Float4()
    {
    }

    Float4 Float4::operator+(const Float4 &f3)
    {
        this->x += f3.x;
        this->y += f3.y;
        this->z += f3.z;
        this->w += f3.w;
        return *this;
    }

    Float4 Float4::operator-(const Float4 &f3)
    {
        this->x -= f3.x;
        this->y -= f3.y;
        this->z -= f3.z;
        this->w -= f3.w;
        return *this;
    }

    Float4 Float4::operator*(const float &f)
    {
        this->x *= f;
        this->y *= f;
        this->z *= f;
        this->w += f;
        return *this;
    }

    Float4 Float4::operator/(const float &f)
    {
        this->x /= f;
        this->y /= f;
        this->z /= f;
        this->w /= f;
        return *this;
    }
}
