#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    Student(string n)
    {
        name = n;
    }

    void show()
    {
        cout << name;
    }
};

int main()
{
    Student s1("Aman");
    s1.show();
}