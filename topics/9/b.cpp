#include <iostream>
using namespace std;

class Rectangle
{
    int height, width;

public:
    Rectangle(int h, int w);
    Rectangle(int dim);
    Rectangle();
    int getArea();
    ~Rectangle();
};

Rectangle::Rectangle(int h, int w)
{
    cout << "constructor called.\n";
    height = h;
    width = w;
}

Rectangle::Rectangle(int dim)
{
    cout << "constructor called.\n";
    height = width = dim;
}

Rectangle::Rectangle()
{
    cout << "constructor called.\n";
    height = width = 0;
}

int Rectangle::getArea()
{
    return height * width;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called\n";
}

int main()
{
    Rectangle *rp = nullptr; //no instance is created.
    rp = new Rectangle;      //default constructor is called.
    cout << "Area1:- " << rp->getArea() << "\n";
    delete rp;

    rp = new Rectangle(3); //initialized by calling constructor.
    cout << "Area2:- " << rp->getArea() << "\n";
    delete rp;

    rp = new Rectangle(3, 4);
    cout << "Area3:- " << rp->getArea() << "\n";
    delete rp;

    rp = new Rectangle[3]; //for dynamically allocated object array, the object must have default constructor.
    for (int i = 0; i < 3; i++)
    {
        //cout << "Area4:- " << rp[i].getArea() << "\n";
        cout << "Area4:- " << (rp + i)->getArea() << "\n"; //pointer arithmetic is applicable
    }
    delete[] rp;

    return 0;
}