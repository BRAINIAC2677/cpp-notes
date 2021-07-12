#include <iostream>
using namespace std;

class Cheetah; //forward declaration

class Tiger
{
    int length;

public:
    Tiger(int length);
    int compare(Cheetah); //member function
};

class Cheetah
{
    int length;

public:
    Cheetah(int lenght);
    friend int Tiger::compare(Cheetah);
};

Tiger::Tiger(int length)
{
    this->length = length;
}

Cheetah::Cheetah(int length)
{
    this->length = length;
}

int Tiger::compare(Cheetah cheetah)
{
    return this->length - cheetah.length;
}

int main()
{
    Tiger t(3);
    Cheetah c(1);
    cout << t.compare(c) << "\n";
    return 0;
}