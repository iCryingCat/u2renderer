
namespace u2
{
    class Matrix2x2
    {
    private:
    public:
        float m2x2[2][2];
        Matrix2x2(float[2][2]);
        ~Matrix2x2();

        float* operator[](int);
        Matrix2x2 operator+(Matrix2x2);
        Matrix2x2 operator-(Matrix2x2);
    };
}