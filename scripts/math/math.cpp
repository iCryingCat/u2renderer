#include "math.h"

namespace u2
{
    bool Math::Approximately(float x, float y)
    {
        float diff = x - y;
        diff = diff < 0 ? -diff : diff;
        return diff < Math::Zero;
    }
}