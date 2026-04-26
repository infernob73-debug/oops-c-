#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 5;
    void show() const
    {
        cout << x;
    }
};

int main()
{
    const Demo d;
    d.show();
}