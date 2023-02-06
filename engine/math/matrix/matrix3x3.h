#ifndef _MATRIX3X3_H_
#define _MATRIX3X3_H_

namespace u2
{
    class Matrix3x3
    {
    private:

    public:
        float m3x3[3][3];
        Matrix3x3(float[3][3]);
        ~Matrix3x3();

        float* operator[](int);
        Matrix3x3 operator+(Matrix3x3);
        Matrix3x3 operator-(Matrix3x3);
    };
}
#endif // !_MATRIX3X3_H_
