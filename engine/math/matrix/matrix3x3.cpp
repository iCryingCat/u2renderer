#include "matrix3x3.h"

namespace u2
{
    Matrix3x3::Matrix3x3(float m3x3[3][3])
    {
        this->m3x3 = m3x3;
    }

    Matrix3x3::~Matrix3x3()
    {
    }
    float* Matrix3x3::operator[](int)
    {
        return nullptr;
    }
    Matrix3x3 Matrix3x3::operator+(Matrix3x3)
    {
        return Matrix3x3();
    }
    Matrix3x3 Matrix3x3::operator-(Matrix3x3)
    {
        return Matrix3x3();
    }
}