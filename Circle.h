namespace shapes
{

    class Circle
    {

    private:
        float Radius;

    public:
        Circle();             // constructor
        Circle(float radius); // Overloading Constructor

        ~Circle();

        void setRadius(float radius);
        float getRadius();
    };
}