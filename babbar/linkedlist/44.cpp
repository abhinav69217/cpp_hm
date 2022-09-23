#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->data=d;
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, int posi, int d)
{
    if (posi==1)
    {
        insertAtHead(head,d);
        return;
    }
    

    Node *temp = head;
    int cnt = 1;
    while (cnt < posi-1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
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

// void deleteNode(Node *& head, int posi){

//     if (posi==1)
//     {
//         Node * temp=head;
//         head=head->next;
//         delete temp;
//     }
//     else{
//         Node *curr=head;
//         Node *prev=NULL;  

//         int cnt=1;
//         while (cnt<=posi)
//         {
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//          prev->next=curr->next;
//          delete curr;   

//     }
    



int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head = node1;
    // Node *tail = node1;
    // print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 319);
    insertAtHead(head, 72);
    print(head);

    // insertAtTail(tail, 12);
    // insertAtTail(tail, 319);
    // insertAtTail(tail, 72);
    // print(head);

    // insertAtPosition(head, 3, 22);
    // print(head);
    // insertAtPosition(head, 1, 62);
    // print(head);

    // deleteNode(head,3);

    return 0;
}