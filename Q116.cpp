#include <iostream>
using namespace std;

class Min
{
public:
    void find(int arr[], int n)
    {
        int min = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] < min)
                min = arr[i];
        cout << min;
    }
};

int main()
{
    int arr[5] = {5, 2, 9, 1, 7};
    Min obj;
    obj.find(arr, 5);
}