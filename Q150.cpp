#include <iostream>
using namespace std;

class Demo
{
private:
    int x;

public:
    void set(int a) { x = a; }
    int get() { return x; }
};

int main()
{
    Demo d;
    d.set(5);
    cout << d.get();
}