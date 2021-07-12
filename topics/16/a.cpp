#include <iostream>
#include "namespaces.cpp"
using namespace std;

using functions::sub;
using namespace classes;

namespace variables
{
    int cno = 2677;
}

int main()
{
    using namespace variables;
    cout << "cadet no. " << cno << "\n";
    cout << "addition: " << functions::add(1, 2) << "\n";
    cout << "subtraction: " << sub(4, 2) << "\n";

    Rectangle rect(3, 4);
    cout << "rect area: " << rect.getArea() << "\n";
    return 0;
}