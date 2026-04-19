// 39. Max using Function
#include <iostream>
using namespace std;
int maxx(int a, int b) { return (a > b) ? a : b; }
int main()
{
    int a, b;
    cin >> a >> b;
    cout << maxx(a, b);
}