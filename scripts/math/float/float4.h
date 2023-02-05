namespace u2
{
    class Float4
    {
    private:
    public:
        float x;
        float y;
        float z;
        float w;
        Float4(float, float, float);
        ~Float4();
        Float4 operator+(const Float4 &);
        Float4 operator-(const Float4 &);
        Float4 operator*(const float &);
        Float4 operator/(const float &);
    };
}