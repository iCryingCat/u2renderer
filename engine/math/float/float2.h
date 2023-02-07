#ifndef _FLOAT2_H_
#define _FLOAT2_H_

namespace u2
{
    class Float2
    {
    public:
        float x = 0;
        float y = 0;

    public:
        Float() {};
        Float2(float x, float y) : x(x), y(y) {};
        ~Float2() {};

        Float2 operator+(const Float2 &);
        Float2 operator-(const Float2 &);
        Float2 operator*(const float &);
        Float2 operator/(const float &);
    };
}
#endif // !_FLOAT2_H_