#ifndef _MATRIX4_H_
#define _MATRIX4_H_

#include <memory>

namespace u2
{
    class Matrix4
    {
    public:
        Matrix4() {};
        ~Matrix4() {};

        float* operator[](int);
        Matrix4 operator+(Matrix4);
        Matrix4 operator-(Matrix4);
    };
}
#endif // !_MATRIX4X4_H_
