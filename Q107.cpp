#include <iostream>
using namespace std;

class Max
{
public:
    void findMax(int arr[], int n)
    {
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        cout << "Max = " << max;
    }
};

int main()
{
    int arr[5] = {10, 25, 5, 40, 15};
    Max obj;
    obj.findMax(arr, 5);
}