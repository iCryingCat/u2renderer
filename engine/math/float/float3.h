#ifndef _FLOAT3_H_
#define _FLOAT3_H_

namespace u2
{
	class Float3
	{
	public:
		float x = 0;
		float y = 0;
		float z = 0;

	public:
		Float3() {};
		Float3(float x, float y, float z) : x(x), y(y), z(z) {};
		~Float3() {};

		Float3 operator+(const Float3&);
		Float3 operator-(const Float3&);
		Float3 operator*(const float&);
		Float3 operator/(const float&);
	};
}
#endif // !_FLOAT3_H_
