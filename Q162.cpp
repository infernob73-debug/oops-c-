#include <iostream>
using namespace std;

class Shape
{
public:
    void show()
    {
        cout << "This is shape";
    }
};

int main()
{
    Shape s;
    s.show();
}