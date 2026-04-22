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
    head->next = NULL;

    Node *temp = head;

    Node *newNode = new Node();
    newNode->data = 2;
    newNode->next = NULL;

    temp->next = newNode;

    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}