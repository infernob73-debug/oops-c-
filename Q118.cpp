#include <iostream>
using namespace std;

class Sort
{
public:
    void bubble(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
    }

    void display(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main()
{
    int arr[5] = {5, 1, 4, 2, 3};
    Sort obj;
    obj.bubble(arr, 5);
    obj.display(arr, 5);
}