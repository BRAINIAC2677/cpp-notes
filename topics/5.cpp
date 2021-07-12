#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int h, int w);
    Rectangle(int dim);
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
    Rectangle square(7), *sp = nullptr;
    sp = &square;
    cout << "square area: " << sp->getArea() << "\n";
    return 0;
}