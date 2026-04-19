#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    if (b != 0)
        cout << "Division = " << a / b;
    else
        cout << "Not possible";
    return 0;
}