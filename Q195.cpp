#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw() { cout << "Circle\n"; }
};

class Square : public Shape
{
public:
    void draw() { cout << "Square\n"; }
};

int main()
{
    Circle c;
    Square s;
    c.draw();
    s.draw();
}