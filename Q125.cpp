#include <iostream>
using namespace std;

class Compare
{
public:
    void cmp(char *a, char *b)
    {
        while (*a && *b)
        {
            if (*a != *b)
            {
                cout << "Not Equal";
                return;
            }
            a++;
            b++;
        }
        cout << "Equal";
    }
};

int main()
{
    char a[] = "abc", b[] = "abc";
    Compare obj;
    obj.cmp(a, b);
}