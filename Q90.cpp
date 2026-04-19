#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    bool sorted = true;

    for (int i = 0; i < 4; i++)
    {
        if (a[i] > a[i + 1])
            sorted = false;
    }

    if (sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";
}