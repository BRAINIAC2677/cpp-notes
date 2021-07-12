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
    height = h;
    width = w;
}

Rectangle::Rectangle(int dim)
{
    height = width = dim;
}

Rectangle::Rectangle()
{
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
    Rectangle rect(5, 5), square;
    square = rect; //bitwise copy of rect. dynamic memory allocation create problems
    cout << "rect area: " << rect.getArea() << "\n";
    cout << "square area: " << square.getArea() << "\n";
    return 0;
}