#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 5;
};

int main()
{
    Demo d;
    Demo *ptr = &d;
    cout << ptr->x;
}