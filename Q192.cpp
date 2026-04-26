#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor";
    }
};

int main()
{
    Derived d;
}