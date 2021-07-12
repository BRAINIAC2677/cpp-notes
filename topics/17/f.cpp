/* 
topic:- virtual function, pure virtual function.
 */

#include <iostream>
using namespace std;

/* 
1| Base is an abstract class as it has an abstract method(pure virtual function)
2| No instance of an abstract class can be created.
3| Base is a polymorphic class as it has virtual function.
4| late/dynamic binding happens for virtual function.
5| destructor can be virtual but not constructor.
 */
class Base
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

    //virtual function
    virtual void show()
    {
        cout << "Base\n";
    }
    //pure virtual function
    virtual void sshow() = 0;

    virtual ~Base()
    {
        cout << "Base Destructor\n";
    }
};

class Derived1 : public Base
{
public:
    /* 
    1| virtual function overriding.
    2| virtual keyword can be used.(optional)
     */
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

*/

int main()
{
    Base *bp = new Derived1;
    bp->setx(1);
    bp->sety(2);
    bp->show();  //show of derived class will be called as it is a virtual function.
    bp->sshow(); //as sshow() is a pure virtual function.
    delete bp;   //both destructor will be called as base destructor is virtual.
    return 0;
}