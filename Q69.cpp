#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;

    Node *newNode = new Node();
    newNode->data = 20;
    newNode->next = NULL;

    head->next = newNode;

    cout << head->data << " " << head->next->data;
}