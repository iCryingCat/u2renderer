#include "mathlib.h"

namespace u2
{
    float MathLib::Zero = 0.000001;

    bool MathLib::Approximately(float x, float y)
    {
        float diff = x - y;
        diff = diff < 0 ? -diff : diff;
        return diff < Math::Zero;
    }
}