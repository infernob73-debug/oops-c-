#include <iostream>
using namespace std;

class Bank
{
    int balance;

public:
    Bank() { balance = 0; }

    void deposit(int amt)
    {
        balance += amt;
    }

    void withdraw(int amt)
    {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void show()
    {
        cout << balance;
    }
};

int main()
{
    Bank b;
    b.deposit(1000);
    b.withdraw(500);
    b.show();
}