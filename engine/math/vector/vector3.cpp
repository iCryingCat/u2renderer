#include <math.h>
#include "vector3.h"

namespace u2
{
    Vector3 Vector3::operator+(Vector3 v3)
    {
        this->x += v3.x;
        this->y += v3.y;
        this->z += v3.z;
        return *this;
    }

    Vector3 Vector3::operator-(Vector3 v3)
    {
        this->x += v3.x;
        this->y += v3.y;
        this->z += v3.z;
        return *this;
    }

    Vector3 Vector3::operator*(float f)
    {
        this->x *= f;
        this->y *= f;
        this->z *= f;
        return *this;
    }

    Vector3 Vector3::operator/(float f)
    {
        this->x /= f;
        this->y /= f;
        this->z /= f;
        return *this;
    }

    float Vector3::Dot(Vector3 v3)
    {
        return this->x * v3.x + this->y * v3.y + this->z * v3.z;
    }

    Vector3 Vector3::Cross(Vector3 v3)
    {
        float x = this->y * v3.z - this->z * v3.y;
        float y = this->z * v3.x - this->x * v3.z;
        float z = this->x * v3.y - this->y * v3.x;
        return Vector3(x, y, z);
    }

    Vector3 Vector3::Normalize()
    {
        float mgtd = this->Magnitude();
        return Vector3(this->x / mgtd, this->y / mgtd, this->z / mgtd);
    }

    float Vector3::Magnitude()
    {
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }
}