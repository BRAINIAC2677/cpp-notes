#include <iostream>
using namespace std;

template <class T>
T myMax(T a, T b)
{
    return a > b ? a : b;
}

template <class T = int>
T myMin(T a, T b)
{
    return a > b ? b : a;
}

template <typename T, class S>
void test(T a, S b)
{
    cout << "T:- " << a << "\n";
    cout << "S:- " << b << "\n";
}

int main()
{
    cout << myMax<double>(1.1, 1.2) << "\n";
    cout << myMin<long long int>(10000000000, 999999999) << "\n";
    cout << myMin(1, 2) << "\n";
    test<string, int>("asif", 2677);
    return 0;
}