#include <iostream>
using namespace std;

class Demo
{
public:
    void show();
};

void Demo::show()
{
    cout << "Outside Class Function";
}

int main()
{
    Demo d;
    d.show();
}