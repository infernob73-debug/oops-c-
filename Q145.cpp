#include <iostream>
using namespace std;

class Test
{
public:
    ~Test()
    {
        cout << "Destroyed";
    }
};

int main()
{
    Test t;
}