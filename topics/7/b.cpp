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

/*
1| No copies of a and b are created.
2| Thus on constructor and destructor is called.
3| dynamic memory allocation  problems solved 
*/
Rectangle *bigger(Rectangle *a, Rectangle *b)
{
    if (a->getArea() > b->getArea())
        return a;
    return b;
}

int main()
{
    Rectangle rect1(1, 2), rect2(2, 3), *big;
    big = bigger(&rect1, &rect2);
    cout << "big area: " << big->getArea() << "\n";
    return 0;
}