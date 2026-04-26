#include <iostream>
using namespace std;

template <class T>
class Test
{
public:
    T x;
    void set(T a) { x = a; }
    void show() { cout << x; }
};

int main()
{
    Test<int> t;
    t.set(10);
    t.show();
}