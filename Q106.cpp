#include <iostream>
using namespace std;

class Array
{
public:
    int arr[5] = {1, 2, 3, 4, 5};

    void sum()
    {
        int s = 0;
        for (int i = 0; i < 5; i++)
            s += arr[i];
        cout << "Sum = " << s;
    }
};

int main()
{
    Array obj;
    obj.sum();
}