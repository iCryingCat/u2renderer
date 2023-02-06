#ifndef _FLOAT3_H_
#define _FLOAT3_H_

namespace u2
{
    class Float3
    {
    private:
    public:
        float x;
        float y;
        float z;
        Float3(float, float, float);
        ~Float3();
        Float3 operator+(const Float3 &);
        Float3 operator-(const Float3 &);
        Float3 operator*(const float &);
        Float3 operator/(const float &);
    };
}
#endif // !_FLOAT3_H_