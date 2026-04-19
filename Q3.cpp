#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float avg;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    avg = (a + b + c) / 3.0;

    cout << "Average = " << avg;

    return 0;
}