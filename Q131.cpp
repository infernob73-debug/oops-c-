#include <iostream>
using namespace std;

class Sum
{
    int arr[5];

public:
    Sum()
    {
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }
    void total()
    {
        int s = 0;
        for (int i = 0; i < 5; i++)
            s += arr[i];
        cout << s;
    }
};

int main()
{
    Sum obj;
    obj.total();
}