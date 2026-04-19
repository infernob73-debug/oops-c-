#include <iostream>
using namespace std;
int main()
{
    int a[5], key;
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not Found";
    return 0;
}