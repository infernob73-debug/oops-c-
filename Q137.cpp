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
    Node *head = new Node();
    head->data = 1;

    Node *second = new Node();
    second->data = 2;

    head->next = second;
    second->next = NULL;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}