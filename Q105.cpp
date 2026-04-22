#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class List
{
public:
    Node *head = NULL;

    void insertEnd(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    List obj;
    obj.insertEnd(10);
    obj.insertEnd(20);
    obj.insertEnd(30);
    obj.display();
}