#include <iostream>
using namespace std;

int *fun()
{
    int *p = new int(100);
    return p;
}

int main()
{
    int *q = fun();
    cout << *q;
}