#include <iostream>
using namespace std;

class Demo
{
public:
    ~Demo()
    {
        cout << "Destructor Called";
    }
};

int main()
{
    Demo d;
}