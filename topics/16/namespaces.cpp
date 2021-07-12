
namespace functions
{
    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }
}

namespace classes
{
    class Rectangle
    {
        int height, width;

    public:
        Rectangle(int h, int w);
        Rectangle(int dim);
        int getArea();
    };

    Rectangle::Rectangle(int h, int w)
    {
        height = h;
        width = w;
    }

    Rectangle::Rectangle(int dim)
    {
        height = width = dim;
    }

    int Rectangle::getArea()
    {
        return height * width;
    }
}