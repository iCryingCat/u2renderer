#ifndef _VECTOR4_H_
#define _VECTOR4_H_

namespace u2
{
	class Vector4
	{
	public:
		float x = 0;
		float y = 0;
		float z = 0;
		float w = 0;

	public:
		Vector4() {};
		Vector4(float x, float y, float z, float w) :x(x), y(y), z(z), w(w) {};
		~Vector4() {};
	};
}
#endif // !_VECTOR4_H_
