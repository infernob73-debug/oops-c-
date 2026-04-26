#include <iostream>
using namespace std;

class Demo
{
public:
    int x;
};

void show(Demo d)
{
    cout << d.x;
}

int main()
{
    Demo d;
    d.x = 10;
    show(d);
}