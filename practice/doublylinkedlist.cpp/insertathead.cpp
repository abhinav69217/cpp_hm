#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head,Node *&tail, int d)
{

    if (head == NULL)
    {
        Node *temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->data = d;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head,tail, 11);
    insertAtHead(head,tail, 12);

    print(head);

    return 0;
}