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
    int x = 10, y = 20;
    Swap obj;
    obj.swap(&x, &y);
    cout << x << " " << y;
}