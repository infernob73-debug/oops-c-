#include <iostream>
using namespace std;

class Max
{
public:
    int find(int arr[], int n)
    {
        int m = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > m)
                m = arr[i];
        return m;
    }
};

int main()
{
    int arr[5] = {1, 5, 3, 9, 2};
    Max obj;
    cout << obj.find(arr, 5);
}