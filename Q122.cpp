#include <iostream>
using namespace std;

class Ptr
{
public:
    void demo()
    {
        int arr[3] = {10, 20, 30};
        int *p = arr;
        for (int i = 0; i < 3; i++)
            cout << *(p + i) << " ";
    }
};

int main()
{
    Ptr obj;
    obj.demo();
}