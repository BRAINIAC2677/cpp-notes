#include <iostream>
using namespace std;

class Point
{
    int *x, *y;

public:
    Point(int, int);
    void show();
    Point &operator=(Point &);
    ~Point();
};

Point::Point(int x, int y)
{
    cout << "constructor called.\n";
    this->x = new int(x);
    this->y = new int(y);
}

void Point::show()
{
    cout << "x: " << *x << " y: " << *y << "\n";
}

Point &Point::operator=(Point &a)
{
    *x = *(a.x);
    *y = *(a.y);
    return *this;
}

Point::~Point()
{
    cout << "destructor called.\n";
    delete x;
    delete y;
}

int main()
{
    Point a(1, 2), b(3, 4);
    b.show();
    b = a; //assignment problem solved using operator overloading
    b.show();
    return 0;
}