#include <iostream>
using namespace std;

class Test
{
public:
    int *p;
    Test()
    {
        p = new int(50);
    }
    void show()
    {
        cout << *p;
    }
};

int main()
{
    Test t;
    t.show();
}