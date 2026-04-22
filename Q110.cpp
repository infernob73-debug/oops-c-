#include <iostream>
using namespace std;

class Swap
{
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main()
{
    int x = 5, y = 10;
    Swap obj;
    obj.swap(&x, &y);
    cout << x << " " << y;
}