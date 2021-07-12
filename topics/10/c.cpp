#include <iostream>
using namespace std;

int main()
{

    int var = 0;
    cout << "var:- " << var << "\n";
    int &ref = var; //independent reference must be initialized
    ref = 1;
    cout << "var:- " << var << "\n";

    const int &cref = 7;
    cout << "constant reference:- " << cref << "\n";
    return 0;
}