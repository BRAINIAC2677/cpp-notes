/* 
topic:- accessiblity 
 */

#include <iostream>
using namespace std;

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
    void show()
    {
        cout << "x: " << x << " y: " << y << "\n";
    }
};

class Derived1 : private Base
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

class Derived2 : protected Base
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

class Derived3 : public Base
{
};

int main()
{
    Derived1 derived1;
    Derived2 derived2;
    Derived3 derived3;
    Base base;

    base.setx(1);
    base.sety(2);
    base.show();

    derived3.setx(2);
    derived3.sety(3);
    derived3.show();

    //derived2.setx(3); error as protected
    //derived2.sety(3); error as protected
    //derived2.show();  error as protected

    derived2.ssety(3);
    derived2.sshow();

    //derived1.setx(3); error as private
    //derived1.sety(3); error as private
    //derived1.show(); error as private

    derived1.ssety(3);
    derived1.sshow();

    return 0;
}