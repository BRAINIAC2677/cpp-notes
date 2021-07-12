/* 
topic:- accessiblity(advanced)
 */

#include <iostream>
using namespace std;

class Base
{
    int x;

protected:
    int y;

public:
    Base(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
        cout << "Base cons\n";
    }
    ~Base()
    {
        cout << "Base des\n";
    }

    void setx(int x)
    {
        this->x = x;
    }
    void sety(int y)
    {
        this->y = y;
    }
    void show()
    {
        cout << "x: " << x << " y: " << y << "\n";
    }
};

class D1 : virtual public Base
{
};

class D2 : virtual public Base
{
};

class DD1 : public D1
{
public:
    int on;
    DD1()
    {
        cout << "DD1 cons\n";
    }
    ~DD1()
    {
        cout << "DD1 des\n";
    }
};

class DD2 : public D2
{
public:
    int to;
    DD2()
    {
        cout << "DD2 cons\n";
    }
    ~DD2()
    {
        cout << "DD2 des\n";
    }
};

class DDD1 : private DD1, protected DD2
{
};

class QD1 : public DDD1
{
public:
    void ck()
    {
        show();
    }
};

int main()
{
    //run the program
    DDD1 a;
    QD1 b;
    b.ck();
    //a.on = 1;
    //a.to = 2;
    //a.show();
    return 0;
}