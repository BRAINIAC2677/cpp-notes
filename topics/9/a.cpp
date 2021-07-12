#include <iostream>
using namespace std;

int main()
{

    int *p = nullptr;
    p = new int;
    *p = 2677;
    cout << "allocation: " << *p << "\n";
    delete p;

    p = new int(2677);
    cout << "allocation and intialization: " << *p << "\n";
    delete p;

    p = new int[5]; //dynamically allocated array can not be initialized
    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
        cout << p[i] << "\n";
    }
    delete[] p;

    return 0;
}