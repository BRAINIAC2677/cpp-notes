/* 
topic:- multiple direct inheritance.
*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    int x;

public:
    Base1(int x)
    {
        this->x = x;
        cout << "Base1 constructor\n";
    }
    ~Base1()
    {
        cout << "Base1 destructor\n";
    }
};

class Base2
{
protected:
    int y;

public:
    Base2(int y)
    {
        this->y = y;
        cout << "Base2 constructor\n";
    }
    ~Base2()
    {
        cout << "Base2 destructor\n";
    }
};

class Derived : protected Base1, public Base2
{
    int z;

public:
    Derived(int, int, int);
    void show();
    ~Derived();
};

Derived::Derived(int x, int y, int z) : Base1(x), Base2(y)
{
    this->z = z;
    cout << "Derived constructor\n";
}

Derived::~Derived()
{
    cout << "Derived destructor\n";
}

void Derived::show()
{
    cout << "x:- " << x << "\ny:- " << y << "\nz:- " << z << "\n";
}

int main()
{
    Derived derived(1, 2, 3);
    derived.show();
    return 0;
}