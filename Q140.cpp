#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    void input() { cin >> id; }
};

int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
        s[i].input();

    for (int i = 0; i < 3; i++)
        cout << s[i].id << " ";
}