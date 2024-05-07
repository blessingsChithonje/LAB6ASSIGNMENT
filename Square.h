namespace shapes
{

    class Square
    {
    private:
        float SideLength;

    public:
        Square(); // default constructor
        Square(float side);
        ~Square(); // destructor

        void setSideLength(float side);
        float getSideLength();
    };
}