#include "matrix4x4.h"

namespace u2
{
    Matrix4x4::Matrix4x4(float m4x4[4][4])
    {
        this->m4x4 = m4x4;
    }

    Matrix4x4::~Matrix4x4()
    {
    }
    float* Matrix4x4::operator[](int)
    {
        return nullptr;
    }
}