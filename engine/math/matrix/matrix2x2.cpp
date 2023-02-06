#include "matrix2x2.h"

namespace u2
{
    Matrix2x2::Matrix2x2(float m2x2[2][2])
    {
        memcpy(this->m2x2[0], m2x2[0], 2 * sizeof(float));
        memcpy(this->m2x2[1], m2x2[1], 2 * sizeof(float));
    }

    Matrix2x2::~Matrix2x2()
    {

    }

    float* Matrix2x2::operator[](int i)
    {
        return this->m2x2[i];
    }

    Matrix2x2 Matrix2x2::operator+(Matrix2x2 m2)
    {
        return *this;
    }

    Matrix2x2 Matrix2x2::operator-(Matrix2x2 m2)
    {
        return *this;
    }
}