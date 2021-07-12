#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
    T height, width;

public:
    Rectangle(T h, T w);
    Rectangle(T dim);
    Rectangle();
    T getArea();
    ~Rectangle();
};

template <class T>
Rectangle<T>::Rectangle(T h, T w)
{
    cout << "constructor called.\n";
    height = h;
    width = w;
}

template <class T>
Rectangle<T>::Rectangle(T dim)
{
    cout << "constructor called.\n";
    height = width = dim;
}

template <class T>
Rectangle<T>::Rectangle()
{
    cout << "constructor called.\n";
    height = width = 0;
}

template <class T>
T Rectangle<T>::getArea()
{
    return height * width;
}

template <class T>
Rectangle<T>::~Rectangle()
{
    cout << "Destructor called\n";
}

int main()
{
    Rectangle<int> recti(1, 2);
    Rectangle<double> rectd(1.2, 3.4);
    //Rectangle<string> rects("asif", "azad");

    cout << recti.getArea() << "\n";
    cout << rectd.getArea() << "\n";
    //cout << rects.getArea() << "\n"; error

    return 0;
}