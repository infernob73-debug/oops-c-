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

    int key = 20;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Found";
            return 0;
        }
        temp = temp->next;
    }
    cout << "Not Found";
}