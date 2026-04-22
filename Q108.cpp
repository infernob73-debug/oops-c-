#include <iostream>
using namespace std;

class Reverse
{
public:
    void rev(int arr[], int n)
    {
        for (int i = 0; i < n / 2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }

    void display(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Reverse obj;
    obj.rev(arr, 5);
    obj.display(arr, 5);
}