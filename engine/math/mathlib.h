#ifndef _MATHLIB_H_
#define _MATHLIB_H_

namespace u2
{
	class Mathlib
	{
	public:
		static float Zero;
	public:
		Mathlib() {}
		~Mathlib() {}

		static bool Approximately(float, float);
	};
}

#endif // !_MATHLIB_H_