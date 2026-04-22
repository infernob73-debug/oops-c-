#include <iostream>
using namespace std;

class Test
{
public:
    void show(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main()
{
    int arr[3] = {1, 2, 3};
    Test t;
    t.show(arr, 3);
}