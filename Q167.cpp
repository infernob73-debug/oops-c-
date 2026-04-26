#include <iostream>
using namespace std;

class Demo
{
public:
    inline int square(int x)
    {
        return x * x;
    }
};

int main()
{
    Demo d;
    cout << d.square(5);
}