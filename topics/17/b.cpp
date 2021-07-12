/* 
topic:- accessiblity-2 
 */

#include <iostream>
using namespace std;

class base
{
    int x;

protected:
    int y;

public:
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

class Derived1 : private base
{
public:
    void ssety(int y)
    {
        this->y = y;
    }

    void sshow()
    {
        cout << "x is not accessible from derived. y: " << y << "\n";
    }
};

class Derived2 : protected base
{
public:
    void ssety(int y)
    {
        this->y = y;
    }

    void sshow()
    {
        cout << "x is not accessible from derived. y: " << y << "\n";
    }
};

class Derived3 : public base
{
};

class SecondGen1 : public Derived1
{
    //every member of base class is inaccessible but public and protected members of Derived1 is accessible
public:
    void ssshow()
    {
        sshow();
    }
};

class SecondGen2 : public Derived2
{
    //protected and public member of base class is protected here but public and protected members of Derived2 is public and protected respectively
    void ssshow()
    {
        show();
    }
};

int main()
{
    SecondGen1 sg1;

    sg1.sshow();
    sg1.ssshow();

    return 0;
}