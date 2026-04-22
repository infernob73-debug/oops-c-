#include <iostream>
using namespace std;

class PointerSum
{
public:
    int sum(int *arr, int n)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
            s += *(arr + i);
        return s;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    PointerSum obj;
    cout << obj.sum(arr, 5);
}