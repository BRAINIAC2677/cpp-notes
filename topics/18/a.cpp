#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    ofstream out;
    ifstream in;
    out.open("input.txt", ios::out | ios::app);
    in.open("input.txt", ios::in);

    out << "Hello File\n";
    in >> str;
    cout << str;

    out.close();
    in.close();
    return 0;
}