#pragma once

namespace u2
{
	class Math
	{
	private:
	public:
		static float Zero;

		Math() {}
		~Math() {}

		static bool Approximately(float, float);
	};

	float Math::Zero = 0.000001;
}