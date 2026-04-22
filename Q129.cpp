#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
};

int main()
{
    Demo obj;
    Demo *ptr = &obj;
    cout << ptr->x;
}