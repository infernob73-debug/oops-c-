#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;

    void show() const
    {
        cout << x;
    }
};

int main()
{
    Demo d;
    d.show();
}