#include <math.h>
#include "vector2.h"

namespace u2
{
    Vector2::Vector2(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2::~Vector2()
    {
    }

    Vector2 Vector2::operator+(Vector2 v2)
    {
        this->x += v2.x;
        this->y += v2.y;
        return *this;
    }

    Vector2 Vector2::operator-(Vector2 v2)
    {
        this->x -= v2.x;
        this->y -= v2.y;
        return *this;
    }

    Vector2 Vector2::operator*(float f)
    {
        this->x *= f;
        this->y *= f;
        return *this;
    }

    Vector2 Vector2::operator/(float f)
    {
        this->x /= f;
        this->y /= f;
        return *this;
    }

    float Vector2::Dot(Vector2 v2)
    {
        return this->x * v2.x + this->y * v2.y;
    }

    Vector2 Vector2::Normalize()
    {
        float mgtd = this->Magnitude();
        return Vector2(this->x / mgtd, this->y / mgtd);
    }

    float Vector2::Magnitude()
    {
        return sqrt(this->x * this->x + this->y * this->y);
    }
}