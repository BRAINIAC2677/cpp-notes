#include <iostream>
using namespace std;

class Rectangle
{
    static int rectCreated; //static member variable
    int height, width;

public:
    Rectangle(int h, int w);
    static int getRectCreated(); //static member function
    ~Rectangle();
};

Rectangle::Rectangle(int h, int w)
{
    cout << "constructor called.\n";
    height = h;
    width = w;
    rectCreated++;
}

int Rectangle::getRectCreated()
{
    return rectCreated;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called\n";
    rectCreated--;
}

/* 
1| has to be defined outside the class to ensure memory allocation.
2| the same static variable will be shared by any class derived from the class that contains the static member
 */
int Rectangle::rectCreated = 0;

int main()
{
    cout << Rectangle::getRectCreated() << "\n";
    {
        Rectangle rect1(1, 2);
        cout << rect1.getRectCreated() << "\n";
    }
    cout << Rectangle::getRectCreated() << "\n";
    return 0;
}