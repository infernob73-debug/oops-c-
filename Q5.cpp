#include <iostream>
using namespace std;

int main()
{
    float per;

    cout << "Enter percentage: ";
    cin >> per;

    if (per > 90)
        cout << "Grade O";
    else if (per > 80)
        cout << "Grade A";
    else if (per > 70)
        cout << "Grade B";
    else if (per > 60)
        cout << "Grade C";
    else if (per > 50)
        cout << "Grade D";
    else if (per > 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}