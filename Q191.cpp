#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << name << " " << age;
    }
};

int main()
{
    Student s("Aman", 19);
    s.display();
}