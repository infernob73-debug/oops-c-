#include <iostream>
using namespace std;

class Sum
{
public:
    int calc(int *arr, int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += *(arr + i);
        return sum;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Sum obj;
    cout << obj.calc(arr, 5);
}