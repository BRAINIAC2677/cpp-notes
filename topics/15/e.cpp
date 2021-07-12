#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class array
{
    int a[3];

public:
    array()
    {
        for (int i = 0; i < 3; i++)
            a[i] = i;
    }
    int &operator[](int i)
    {
        return a[i];
    }
    int &operator[](char *s);
};

// [] operator overloaded function must be a member function.
int &array::operator[](char *s)
{
    if (strcmp(s, "zero") == 0)
        return a[0];
    else if (strcmp(s, "one") == 0)
        return a[1];
    else if (strcmp(s, "two") == 0)
        return a[2];
    return a[0];
}

int main()
{
    array ob;
    cout << ob[1] << "\n";     // 1
    cout << ob["two"] << "\n"; // 2
    /* 
    no problem
    ob[i] is now both an l-value and r-value
     */
    ob[0] = 5;
    cout << ob["zero"] << "\n"; // 5
    return 0;
}
