#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 2, 2, 3, 4, 4};
    for (int i = 0; i < 6; i++)
    {
        bool dup = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                dup = true;
        }
        if (!dup)
            cout << a[i] << " ";
    }
}