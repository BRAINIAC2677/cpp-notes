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

/* 
1| a and b are bitwise copies of the passed objects
2| for a and b no constructor is called but destructors are called
3| dynamic memory allocation will create problem 
4| returning is done by creating a temporary copy(no construtor but destructor) of the object invisible to us.
*/
Rectangle bigger(Rectangle a, Rectangle b)
{
    if (a.getArea() > b.getArea())
        return a;
    return b;
}

int main()
{
    Rectangle rect1(1, 2), rect2(2, 3), big;
    big = bigger(rect1, rect2);
    cout << "big area: " << big.getArea() << "\n";
    return 0;
}