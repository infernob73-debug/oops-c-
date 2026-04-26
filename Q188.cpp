#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 5;

    void operator++()
    {
        x++;
    }
};

int main()
{
    Demo d;
    ++d;
    cout << d.x;
}