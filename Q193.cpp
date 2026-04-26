#include <iostream>
using namespace std;

class Base
{
public:
    Base(int x)
    {
        cout << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int a) : Base(a) {}
};

int main()
{
    Derived d(10);
}