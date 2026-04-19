#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node{10, NULL};
    head->next = new Node{20, NULL};

    Node *temp = head;
    Node *del = temp->next;
    temp->next = del->next;
    delete del;

    cout << head->data;
}