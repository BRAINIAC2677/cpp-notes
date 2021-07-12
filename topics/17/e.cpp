/* 
topic:- base class pointer
 */

#include <iostream>
using namespace std;

class Base
{
    int x;

protected:
    int y;

public:
    Base()
    {
        cout << "Base constructor\n";
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
        cout << "Base\n";
    }
    ~Base()
    {
        cout << "Base Destructor\n";
    }
};

class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "Derived1 constructor\n";
    }
    //function overriding
    void show()
    {
        cout << "Derived1\n";
    }

    void sshow()
    {
        cout << "only in Derived1\n";
    }
    ~Derived1()
    {
        cout << "Derived1 destructor\n";
    }
};

/* 
1| derived class must access the base class publicly for using base class pointer.
2| pointer arithmetic will happen assuming base class pointer
*/

int main()
{
    Base *bp = new Derived1;
    bp->setx(1);
    bp->sety(2);
    bp->show(); //show of base class will be called.

    //bp->sshow() is inaccessible as base class don't know about sshow().
    delete bp;
    return 0;
}