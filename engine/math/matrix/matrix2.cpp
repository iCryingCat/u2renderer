#include "matrix2.h"

namespace u2
{
    float* Matrix2::operator[](int i)
    {
        return this->m2x2[i];
    }

    Matrix2 Matrix2::operator+(Matrix2 m2)
    {
        return *this;
    }

    Matrix2 Matrix2::operator-(Matrix2 m2)
    {
        return *this;
    }
}