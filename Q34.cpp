// 34. Parameterized Constructor
#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    Test(int a) { x = a; }
};
int main()
{
    Test t(5);
    cout << t.x;
    return 0;
}