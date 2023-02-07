#ifndef _MATRIX3_H_
#define _MATRIX3_H_

namespace u2
{
    class Matrix3
    {
    private:

    public:
        Matrix3() {};
        ~Matrix3() {};

        float* operator[](int);
        Matrix3 operator+(Matrix3);
        Matrix3 operator-(Matrix3);
    };
}
#endif // !_MATRIX3X3_H_
