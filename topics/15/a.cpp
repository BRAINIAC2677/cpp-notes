#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point()
    {
        x = 0;
        y = 0;
    }
    void show()
    {
        cout << "x: " << x << " y: " << y << "\n";
    }

    Point operator+(Point &p);
    Point operator-(Point &p);
    Point operator+(int num);
};

Point Point::operator+(Point &p)
{
    Point res;
    res.x = x + p.x;
    res.y = y + p.y;
    return res;
}

Point Point::operator+(int a)
{
    Point res;
    res.x = x + a;
    res.y = y + a;
    return res;
}

Point Point::operator-(Point &p)
{
    Point res;
    res.x = x - p.x;
    res.y = y - p.y;
    return res;
}

//When a binary operator is overloaded, the left operand is passed implicitly to the function and the right operand is passed as an argument.

int main()
{
    Point a(2, -1), b(-3, 9), c;
    c = a + 4;
    c.show();
    (c + b).show();
    return 0;
}