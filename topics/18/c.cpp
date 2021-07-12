#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    char str[100];
    fstream stream("input.txt");
    ifstream in("input.txt", ios::binary);

    stream << "Lose\nYourself";
    stream.flush();
    /* 
    1| reads untill:
    a| n-1 chars are reached.
    b| eof is reached.
    c| newline is reached. [\n is not extracted]

    2| a null is added in str
     */
    in.get(str, 100);
    string s(str);
    cout << s << "\n";
    cout << "tellg:- " << in.tellg() << "\n";

    in.seekg(0, ios::beg);
    in.getline(str, 100);
    s.assign(str);
    cout << s << "\n";
    cout << "tellg:- " << in.tellg() << "\n";

    in.seekg(0, ios::beg);
    in.get(str, 100, ',');
    s.assign(str);
    cout << s << "\n";

    stream.close();
    return 0;
}