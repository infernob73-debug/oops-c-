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

    void insert(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }

    void deleteBegin()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
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
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.deleteBegin();
    obj.display();
}