#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void input()
    {
        cin >> marks;
    }
    void result()
    {
        if (marks >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
};

int main()
{
    Student s;
    s.input();
    s.result();
}