#include <iostream>
using namespace std;

class Dynamic
{
public:
    void create(int n)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        delete[] arr;
    }
};

int main()
{
    Dynamic obj;
    obj.create(5);
}