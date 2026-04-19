// 33. Constructor
#include <iostream>
using namespace std;
class Test
{
public:
    Test() { cout << "Constructor"; }
};
int main()
{
    Test t;
    return 0;
}