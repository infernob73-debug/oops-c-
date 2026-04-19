#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *node = new Node{10, NULL};
    cout << node->data;
}