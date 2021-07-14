#include <iostream>
using namespace std;

class Rectangle
{
    //private members
    int height = 0, width = 0;

public:
    void setHeight(int h);
    void setWidth(int w);
    int getArea() //member functions defined inside class declaration are automatic inline function.
    {
        return height * width;
    }
} rect1;

void Rectangle::setHeight(int h)
{
    height = h;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

int main()
{
    Rectangle rect2(rect1); //default copy constructor
    rect2.setWidth(2);
    rect2.setHeight(3);
    cout << "rect1 Area: " << rect1.getArea() << "\n";
    cout << "rect2 Area: " << rect2.getArea() << "\n";
    return 0;
}