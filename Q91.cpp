#include <iostream>
using namespace std;
int main()
{
    int a[5] = {0, 1, 0, 3, 2};
    int j = 0;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}