#include <iostream>
using namespace std;

class Rectangle
{
    int *height, *width;

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
    height = new int;
    width = new int;
    *height = h;
    *width = w;
}

Rectangle::Rectangle(int dim)
{
    cout << "constructor called.\n";
    height = new int;
    width = new int;
    *height = *width = dim;
}

Rectangle::Rectangle()
{
    cout << "constructor called.\n";
    height = new int;
    width = new int;
    *height = *width = 0;
}

int Rectangle::getArea()
{
    return *height * *width;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called\n";
}

// the returned reference can not refer to local variables/objects.
Rectangle &bigger(Rectangle &a, Rectangle &b)
{
    if (a.getArea() > b.getArea())
        return a;
    return b;
}

int main()
{
    Rectangle rect1(1, 2), rect2(2, 3);
    Rectangle &big = bigger(rect1, rect2);
    cout << "big area: " << big.getArea() << "\n";
    return 0;
}