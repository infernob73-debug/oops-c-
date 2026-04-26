#include <iostream>
using namespace std;

class Test
{
public:
    int x;
};

Test create()
{
    Test t;
    t.x = 50;
    return t;
}

int main()
{
    Test t = create();
    cout << t.x;
}