#include <iostream>
using namespace std;

class Array
{
public:
    int arr[5] = {1, 2, 3, 4, 5};

    void reverse()
    {
        int temp;
        for (int i = 0; i < 5 / 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[5 - i - 1];
            arr[5 - i - 1] = temp;
        }
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    }
};

int main()
{
    Array obj;
    obj.reverse();
    obj.display();
}