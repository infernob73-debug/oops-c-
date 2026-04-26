#include <iostream>
using namespace std;

class Bank
{
private:
    int balance;

public:
    void setBalance(int b)
    {
        balance = b;
    }

    void getBalance()
    {
        cout << balance;
    }
};

int main()
{
    Bank b;
    b.setBalance(5000);
    b.getBalance();
}