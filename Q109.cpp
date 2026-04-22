#include <iostream>
using namespace std;

class Search
{
public:
    void find(int arr[], int n, int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                cout << "Found at index " << i;
                return;
            }
        }
        cout << "Not Found";
    }
};

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    Search obj;
    obj.find(arr, 5, 30);
}