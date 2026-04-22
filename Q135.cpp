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
    head->data = 20;

    Node *newNode = new Node();
    newNode->data = 10;
    newNode->next = head;

    head = newNode;

    cout << head->data;
}