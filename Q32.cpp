// 32. Class Addition
#include <iostream>
using namespace std;
class Add
{
public:
    int a, b;
    void sum() { cout << a + b; }
};
int main()
{
    Add o;
    cin >> o.a >> o.b;
    o.sum();
    return 0;
}