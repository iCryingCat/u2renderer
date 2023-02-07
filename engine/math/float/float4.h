#ifndef _FLOAT4_H_
#define _FLOAT4_H_

namespace u2
{
    class Float4
    {
    public:
        float x = 0;
        float y = 0;
        float z = 0;
        float w = 0;

    public:
        Float4() {};
        Float4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
        ~Float4() {}

        Float4 operator+(const Float4 &);
        Float4 operator-(const Float4 &);
        Float4 operator*(const float &);
        Float4 operator/(const float &);
    };
}
#endif // !_FLOAT4_H_