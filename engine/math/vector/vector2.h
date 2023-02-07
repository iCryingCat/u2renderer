#ifndef _VECTOR2_H_
#define _VECTOR2_H_

namespace u2
{
    class Vector2
    {
    public:
        float x = 0;
        float y = 0;

    public:
        Vector2() {};
        Vector2(float x, float y) : x(x), y(y) {};
        ~Vector2() {};

        Vector2 operator+(Vector2);
        Vector2 operator-(Vector2);
        Vector2 operator*(float);
        Vector2 operator/(float);

        float Dot(Vector2);
        float Magnitude();
        Vector2 Normalize();
    };
}
#endif // !_VECTOR2_H_
