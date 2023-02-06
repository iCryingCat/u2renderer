#ifndef _MATRIX4X4_H_
#define _MATRIX4X4_H_

namespace u2
{
    class Matrix4x4
    {
    private:
    public:
        float m4x4[4][4];

        Matrix4x4(float[4][4]);
        ~Matrix4x4();

        float* operator[](int);
        Matrix4x4 operator+(Matrix4x4);
        Matrix4x4 operator-(Matrix4x4);
    };
}
#endif // !_MATRIX4X4_H_
