#include <iostream>
using namespace std;

class Merge
{
public:
    void merge(int a[], int b[])
    {
        int c[6];
        for (int i = 0; i < 3; i++)
            c[i] = a[i];
        for (int i = 0; i < 3; i++)
            c[i + 3] = b[i];
        for (int i = 0; i < 6; i++)
            cout << c[i] << " ";
    }
};

int main()
{
    int a[3] = {1, 2, 3}, b[3] = {4, 5, 6};
    Merge obj;
    obj.merge(a, b);
}