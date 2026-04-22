#include <iostream>
using namespace std;

class Count
{
public:
    static int c;
    Count() { c++; }
};

int Count::c = 0;

int main()
{
    Count a, b, c;
    cout << Count::c;
}