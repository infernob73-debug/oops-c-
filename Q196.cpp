#include <iostream>
using namespace std;

class A;

class B
{
public:
    void show(A a);
};

class A
{
private:
    int x = 10;
    friend class B;
};

void B::show(A a)
{
    cout << a.x;
}

int main()
{
    A a;
    B b;
    b.show(a);
}