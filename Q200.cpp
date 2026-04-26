#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Created\n";
    }
};

int main()
{
    Demo d[3];
}