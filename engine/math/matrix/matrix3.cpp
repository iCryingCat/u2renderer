#include "matrix3.h"

namespace u2
{
    Matrix3::Matrix3(float m3x3[3][3])
    {
        this->m3x3 = m3x3;
    }

    Matrix3::~Matrix3()
    {
    }
    float* Matrix3::operator[](int)
    {
        return nullptr;
    }
    Matrix3 Matrix3::operator+(Matrix3)
    {
        return Matrix3();
    }
    Matrix3 Matrix3::operator-(Matrix3)
    {
        return Matrix3();
    }
}