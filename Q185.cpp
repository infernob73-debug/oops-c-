#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 5;
};

void change(Demo &d)
{
    d.x = 20;
}

int main()
{
    Demo d;
    change(d);
    cout << d.x;
}