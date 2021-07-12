#include <iostream>
using namespace std;

int global;

/* 
1| function returning reference can be used as l-value.
2| the reference can not be local.
 */
int &fun()
{
    return global;
}

int main()
{
    global = 1;
    cout << "global:- " << global << "\n";
    fun() = 2;
    cout << "global:- " << global << "\n";
    fun() = 3;
    cout << "global:- " << global << "\n";
    return 0;
}