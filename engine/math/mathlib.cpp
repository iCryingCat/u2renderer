#include "mathlib.h"

namespace u2
{
    float Mathlib::Zero = 0.000001f;

    bool Mathlib::Approximately(float x, float y)
    {
        float diff = x - y;
        diff = diff < 0 ? -diff : diff;
        return diff < Mathlib::Zero;
    }
}