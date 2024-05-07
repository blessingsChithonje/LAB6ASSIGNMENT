namespace shapes
{
    class Triangle
    {

    private:
        float baseOfTriangle;
        float hieghtOfTriangle;

    public:
        Triangle();
        Triangle(float base, float hieght); // overloading constructor

        ~Triangle(); // destructor

        void setBase(float base);
        void setHieght(float hieght);
        float getBase();
        float getHieght();
    };
}