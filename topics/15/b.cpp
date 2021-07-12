#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "x: " << x << " y: " << y << "\n";
    }

    friend Point operator+(Point, int);
    friend Point operator+(int, Point); //not possible by member functions(int before object)
    friend bool operator==(Point, Point);
    friend Point operator++(Point &);      //prefix
    friend Point operator++(Point &, int); //postfix
};

Point operator+(int a, Point b)
{
    Point res;
    res.x = b.x + a;
    res.y = b.y + a;
    return res;
}

Point operator+(Point b, int a)
{
    Point res;
    res.x = b.x + a;
    res.y = b.y + a;
    return res;
}

bool operator==(Point a, Point b)
{
    return (a.x == b.x) && (a.y == b.y);
}

Point operator++(Point &a)
{
    a.x++;
    a.y++;
    return a;
}

Point operator++(Point &a, int unused)
{
    Point pre = a;
    a.x++;
    a.y++;
    return pre;
}

int main()
{
    Point a(3);
    a.show();
    a++;
    a.show();
    a = 4 + a;
    a.show();
    a = a + -4;
    (++a).show();
    return 0;
}