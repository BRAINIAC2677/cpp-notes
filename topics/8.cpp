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
    Rectangle arr1[2];                                //called with empty constructors
    Rectangle arr2[2] = {Rectangle(2), Rectangle(3)}; //constructors called with one argument
    Rectangle arr3[2] = {2, 3};                       //shorthand for one argumented object
    Rectangle arr4[2] = {Rectangle(1, 2), Rectangle(2, 3)};
    Rectangle arr5[3] = {Rectangle(), Rectangle(2), Rectangle(3, 4)}; //calling overloaded constructors of same class
    cout << arr5[1].getArea() << "\n";
    return 0;
}