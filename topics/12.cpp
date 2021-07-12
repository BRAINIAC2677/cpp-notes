#include <iostream>
using namespace std;

#define set1(a, b) a = b;

//manual inlined function
inline void set2(int a, int b)
{
    a = b;
}

/* 
1| member functions defined inside class declaration are automatic inline function.
 */

int main()
{
    int a = 2, b = 7;
    cout << "a: " << a << " b: " << b << "\n";
    set2(a, b);
    cout << "a: " << a << " b: " << b << "\n";
    set1(a, b);
    cout << "a: " << a << " b: " << b << "\n";
    return 0;
}