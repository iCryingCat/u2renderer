#ifndef _FLOAT2_H_
#define _FLOAT2_H_

namespace u2
{
    class Float2
    {
    private:
    public:
        float x;
        float y;
        Float2(float, float);
        ~Float2();
        Float2 operator+(const Float2 &);
        Float2 operator-(const Float2 &);
        Float2 operator*(const float &);
        Float2 operator/(const float &);
    };
}
#endif // !_FLOAT2_H_