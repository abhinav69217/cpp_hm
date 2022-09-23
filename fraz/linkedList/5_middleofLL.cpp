#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};



int getlength(Node*&head){
    Node*temp=head;

}



int main()
{
    Node* node1= new Node(7);
    Node* node2= new Node(4);
    Node* node3= new Node(5);
    return 0;
}