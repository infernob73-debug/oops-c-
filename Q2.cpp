#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    int marks[5];
    float percentage;
    char grade;

public:
    void input()
    {
        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void calculate()
    {
        int total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = total / 5.0;

        // Grade logic
        if (percentage > 90)
            grade = 'O';
        else if (percentage > 80)
            grade = 'A';
        else if (percentage > 70)
            grade = 'B';
        else if (percentage > 60)
            grade = 'C';
        else if (percentage > 50)
            grade = 'D';
        else if (percentage > 40)
            grade = 'P';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nPercentage: " << percentage;
        cout << "\nGrade: " << grade;
    }
};

int main()
{
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}