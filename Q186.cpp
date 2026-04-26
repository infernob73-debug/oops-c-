#include <iostream>
using namespace std;

class Outer
{
public:
    class Inner
    {
    public:
        void show()
        {
            cout << "Inner Class";
        }
    };
};

int main()
{
    Outer::Inner i;
    i.show();
}