#include <iostream>
using namespace std;

class Rectangle
{
    int *height, *width;

public:
    Rectangle(const Rectangle &obj);
    Rectangle(int h, int w);
    Rectangle(int dim);
    Rectangle();
    int getArea();
    ~Rectangle();
};

//copy constructor
Rectangle::Rectangle(const Rectangle &obj)
{
    cout << "copy constructor called.\n";
    height = new int;
    width = new int;
    *height = *obj.height;
    *width = *obj.width;
}

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

Rectangle bigger(Rectangle a, Rectangle b)
{
    if (a.getArea() > b.getArea())
        return a;
    return b;
}

/* 
1| copy constructor is called in case of initialization[copies]
2| copy constructor is not called in assignment
3| compiler provides a default copy constructor[bitwise copy] if not defined 
 */

int main()
{
    Rectangle rect1(1, 2), rect2(2, 3), big;
    big = bigger(rect1, rect2);
    cout << "big area: " << big.getArea() << "\n";
    return 0;
}