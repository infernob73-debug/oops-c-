#include <iostream>
using namespace std;

class Demo
{
public:
    Demo() { cout << "Inline Constructor"; }
};

int main()
{
    Demo d;
}