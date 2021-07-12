#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int h, int w);
    Rectangle();
    friend istream &operator>>(istream &, Rectangle &);
    int getArea();
    ~Rectangle();
};

Rectangle::Rectangle(int h, int w)
{
    cout << "constructor called.\n";
    height = h;
    width = w;
}

Rectangle::Rectangle()
{
    cout << "constructor called.\n";
    height = width = 0;
}

istream &operator>>(istream &stream, Rectangle &rect)
{
    cout << "Enter width and height: \n"; //not good practise
    stream >> rect.width >> rect.height;
    return stream;
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
    Rectangle a;
    cin >> a;
    cout << a.getArea() << "\n";
    return 0;
}