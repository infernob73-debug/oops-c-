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
    Node *a = new Node(), *b = new Node();
    a->data = 1;
    a->next = b;
    b->data = 2;
    b->next = NULL;

    int count = 0;
    Node *t = a;
    while (t)
    {
        count++;
        t = t->next;
    }
    cout << count;
}