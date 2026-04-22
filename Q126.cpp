#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *n1 = new Node(), *n2 = new Node();
    n1->data = 10;
    n1->next = n2;
    n2->data = 20;
    n2->next = NULL;

    Node *temp = n1;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}