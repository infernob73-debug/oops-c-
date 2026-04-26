#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor Called";
    }
};

int main()
{
    Test t;
}