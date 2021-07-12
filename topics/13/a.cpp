#include <iostream>
using namespace std;

class Cheetah; //forward declaration

class Tiger
{
    int length;

public:
    Tiger(int length);
    friend int compare(Tiger, Cheetah); //not a member
};

class Cheetah
{
    int length;

public:
    Cheetah(int lenght);
    friend int compare(Tiger, Cheetah); //not a member
};

Tiger::Tiger(int length)
{
    this->length = length;
}

Cheetah::Cheetah(int length)
{
    this->length = length;
}

// global friend function
int compare(Tiger tiger, Cheetah cheetah)
{
    return tiger.length - cheetah.length;
}

int main()
{
    Tiger t(3);
    Cheetah c(1);
    cout << compare(t, c) << "\n";
    return 0;
}