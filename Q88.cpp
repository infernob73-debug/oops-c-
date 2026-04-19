#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 2, 3, 1};

    for (int i = 0; i < 5; i++)
    {
        int count = 1;
        if (a[i] == -1)
            continue;

        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        cout << a[i] << " -> " << count << endl;
    }
}