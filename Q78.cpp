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

    head->next->data = 50;

    cout << head->next->data;
}