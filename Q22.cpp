#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum = 0;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    if (sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}