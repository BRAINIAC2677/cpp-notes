#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int h, int w);
    Rectangle();
    int getArea();
    friend ostream &operator<<(ostream &, Rectangle &);
    ~Rectangle();
};

Rectangle::Rectangle(int h, int w)
{
    //cout << "constructor called.\n";
    height = h;
    width = w;
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

ostream &operator<<(ostream &stream, Rectangle &rect)
{
    for (int i = 0; i < rect.height; i++)
    {
        for (int j = 0; j < rect.width; j++)
        {
            stream << "*";
        }
        stream << "\n";
    }
    return stream;
}

Rectangle::~Rectangle()
{
    //cout << "Destructor called\n";
}

int main()
{
    Rectangle a(3, 4);
    cout << a;
    return 0;
}