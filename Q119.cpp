#include <iostream>
using namespace std;

class Sort
{
public:
    void selection(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[min])
                    min = j;
            swap(arr[i], arr[min]);
        }
    }

    void show(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};
    Sort obj;
    obj.selection(arr, 5);
    obj.show(arr, 5);
}