#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    void input()
    {
        cin >> name;
    }
    void display()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
        s[i].input();
    for (int i = 0; i < 3; i++)
        s[i].display();
}