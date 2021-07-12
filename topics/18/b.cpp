#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string str;
    fstream stream;
    stream.open("input.txt", ios::in | ios::out | ios::trunc);

    str = "hello asif";
    cout << "tellp:- " << stream.tellp() << "\n";
    for (char c : str)
    {
        stream.put(c);
    }
    cout << "tellp:- " << stream.tellp() << "\n";

    str = "hola";
    stream.seekp(0, ios::beg);
    cout << "tellp:- " << stream.tellp() << "\n";
    for (char c : str)
    {
        stream.put(c);
    }
    cout << "tellp:- " << stream.tellp() << "\n";
    stream.flush();

    cout << "tellg:- " << stream.tellg() << "\n";
    stream.seekg(0, ios::beg);
    cout << "tellg:- " << stream.tellg() << "\n";
    while (!stream.eof())
    {
        char c;
        cout << "\ntellg:- " << stream.tellg() << " ";
        stream.get(c);
        if (stream.fail() || stream.bad())
        {
            cout << "I / O Error terminating"
                 << "\n";
            //return 1;
        }

        cout << c;
    }
    cout << "\n";
    cout << "tellg:- " << stream.tellg() << "\n";
    cout << "tellp:- " << stream.tellp() << "\n";

    stream.close();
    return 0;
}