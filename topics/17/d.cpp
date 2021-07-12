/* 
topic:- virtual base class
 */

#include <iostream>
using namespace std;

class Base
{
public:
    int i;
};

//virtual syntax should be used on the first gen derived class
class D1 : virtual public Base
{
public:
    int j;
}; // activity of D1 not affected

class D2 : virtual public Base
{
public:
    int k;
}; // activity of D2 not affected

class D3 : public D1, public D2
{
    // contains only one copy of ‘i’
}; // no change in this class definition

void main()
{
    D3 obj;
    obj.i = 10;      // no problem
    obj.j = 20;      // no problem
    obj.k = 30;      // no problem
    obj.D1::i = 100; // no problem, overwrites ‘10’
    obj.D2::i = 200; // no problem, overwrites ‘100’
}
