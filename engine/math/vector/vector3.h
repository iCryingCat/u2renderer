#ifndef _VECTOR3_H_
#define _VECTOR3_H_

namespace u2
{
    class Vector3
    {
    public:
        float x = 0;
        float y = 0;
        float z = 0;

    public:
        Vector3() {};
        Vector3(float x, float y, float z) : x(x), y(y), z(z) {};
        ~Vector3() {};

        Vector3 operator+(Vector3);
        Vector3 operator-(Vector3);
        Vector3 operator*(float);
        Vector3 operator/(float);

        float Dot(Vector3);
        Vector3 Cross(Vector3);
        Vector3 Normalize();

        float Magnitude();
    };
}
#endif // !_VECTOR3_H_