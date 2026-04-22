#include <iostream>
using namespace std;

class Str
{
public:
    void len(char *s)
    {
        int count = 0;
        while (*s != '\0')
        {
            count++;
            s++;
        }
        cout << count;
    }
};

int main()
{
    char str[] = "Hello";
    Str obj;
    obj.len(str);
}