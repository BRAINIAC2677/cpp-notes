#include <iostream>
using namespace std;

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
    cout << "constructor called.\n";
    height = h;
    width = w;
}

Rectangle::Rectangle(int dim)
{
    cout << "constructor called.\n";
    height = width = dim;
}

int Rectangle::getArea()
{
    return height * width;
}

int main()
{
    Rectangle rect(2, 3), square(4);
    cout << "rect area: " << rect.getArea() << "\n";
    cout << "square area: " << square.getArea() << "\n";
    return 0;
}