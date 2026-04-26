#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Object Created";
    }
};

int main()
{
    Demo *d = new Demo();
}