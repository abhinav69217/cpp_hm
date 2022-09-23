#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

int getLength(Node *&head)
{
    int len = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->data = d;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    temp->data = d;
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = head;
    // print(head);
    // cout<<getLength(head)<<endl;

    // insertathead(head, 11);
    // print(head);
    // insertathead(head, 12);
    // print(head);
    // insertathead(head, 13);
    // print(head);

    insertattail(tail, 11);
    insertattail(tail, 12);
    insertattail(tail, 13);
    print(tail); 

    return 0;
}