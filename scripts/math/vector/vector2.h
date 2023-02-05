namespace u2
{
    class Vector2
    {
    private:
        float x;
        float y;

    public:
        Vector2(float, float);
        ~Vector2();
        Vector2 operator+(Vector2);
        Vector2 operator-(Vector2);
        Vector2 operator*(float);
        Vector2 operator/(float);

        float Dot(Vector2);
        Vector2 Normalize();

        float Magnitude();
    };
}