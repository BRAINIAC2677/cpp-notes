#include <iostream>
using namespace std;

void order(double, int);
void order(int i, double d);

void overloaded(int i)
{
    cout << "overloaded:- int\n";
}

void overloaded(double i)
{
    cout << "overloaded:- double\n";
}

void overloaded(long long int i)
{
    cout << "overloaded:- long long int\n";
}

void overloaded(double d, char c)
{
    cout << "overloaded:- double, char\n";
}

int main()
{
    // order(2, 2); ambiguous call
    order(2, 2.1);
    order(1.2, 3);

    overloaded(3);
    overloaded(3.0);
    overloaded(3LL);
    overloaded(3, 'c');
    return 0;
}

void order(double d, int i)
{
    cout << "order:- double, int\n";
}

void order(int i, double d)
{
    cout << "order:- int, double\n";
}