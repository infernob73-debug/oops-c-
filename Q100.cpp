#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = head; // loop

    if (head->next->next == head)
        cout << "Loop Detected";
}