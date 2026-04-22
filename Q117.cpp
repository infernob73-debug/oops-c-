#include <iostream>
using namespace std;

class Count
{
public:
    void check(int arr[], int n)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        cout << "Even=" << even << " Odd=" << odd;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Count obj;
    obj.check(arr, 5);
}
s