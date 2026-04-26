#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Default\n";
    }

    Demo(int x)
    {
        cout << "Parameterized " << x;
    }
};

int main()
{
    Demo d1;
    Demo d2(10);
}