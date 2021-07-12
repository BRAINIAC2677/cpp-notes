#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int h, int w);
    Rectangle(int dim);
    Rectangle();
    int getArea();
    ~Rectangle();
};

Rectangle::Rectangle(int h, int w)
{
    cout << "constructor called.\n";
    height = h;
    width = w;
}

Rectangle::Rectangle(int dim)
{
    cout << "constructor called.\n";
    height = width = dim;
}

Rectangle::Rectangle()
{
    cout << "constructor called.\n";
    height = width = 0;
}

int Rectangle::getArea()
{
    return height * width;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called\n";
}

int main()
{
    {
        Rectangle rect(2, 3);
        cout << "rect area: " << rect.getArea() << "\n";
    }
    Rectangle square(7);
    cout << "square area: " << square.getArea() << "\n";
    return 0;
}