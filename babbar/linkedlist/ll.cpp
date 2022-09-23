#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void print(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 5;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    print(head);
    return 0;
}