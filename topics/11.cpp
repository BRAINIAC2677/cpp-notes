#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int height, int width);
    int getArea();
};

Rectangle::Rectangle(int height, int width)
{
    this->height = height;
    this->width = width;
}

int Rectangle::getArea()
{
    return this->height * this->width;
}

/* 
1| every non-static member function has a object pointer as it's first argument called this.
 */
int main()
{
    Rectangle rect(2, 5);
    cout << "rect area: " << rect.getArea() << "\n"; // rect.getArea()  is called as getArea(&rect).
    return 0;
}