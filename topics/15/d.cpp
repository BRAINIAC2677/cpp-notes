#include <iostream>
using namespace std;

class Point
{
    int *x, *y;

public:
    Point(int, int);
    Point();
    void show();
    Point &operator=(const Point &);
    Point operator+(Point &);
    ~Point();
};

Point::Point(int x, int y)
{
    cout << "constructor called.\n";
    this->x = new int(x);
    this->y = new int(y);
}

Point::Point()
{
    cout << "constructor called.\n";
    this->x = new int(0);
    this->y = new int(0);
}

void Point::show()
{
    cout << "x: " << *x << " y: " << *y << "\n";
}

Point &Point::operator=(const Point &a)
{
    *x = *(a.x);
    *y = *(a.y);
    return *this;
}

Point Point::operator+(Point &a)
{
    Point temp;
    *temp.x = *(this->x) + *a.x;
    *temp.y = *(this->y) + *a.y;
    return temp;
}

Point::~Point()
{
    cout << "destructor called.\n";
    delete x;
    delete y;
}

int main()
{
    Point a(1, 2), b(3, 4), c;
    a.show();
    b.show();
    c = a + b;
    c.show();
    return 0;
}