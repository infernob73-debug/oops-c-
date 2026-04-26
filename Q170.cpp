#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    void set(int x)
    {
        this->x = x;
    }

    void show()
    {
        cout << x;
    }
};

int main()
{
    Demo d;
    d.set(10);
    d.show();
}