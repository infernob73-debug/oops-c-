#include <iostream>
using namespace std;

class Student
{
    int marks[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
    }
};

int main()
{
    Student s;
    s.input();
    s.display();
}