#ifndef _VECTOR3_H_
#define _VECTOR3_H_

namespace u2
{
    class Vector3
    {
    private:
        float x;
        float y;
        float z;

    public:
        Vector3(float, float, float);
        ~Vector3();

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