#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void traverse(Node *head){
    Node * current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
    cout<<endl;
};
Node *insertBegin(Node *head, int data){
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
};
int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    traverse(head);
    head=insertBegin(head,5);
    traverse(head);
   return 0;
}