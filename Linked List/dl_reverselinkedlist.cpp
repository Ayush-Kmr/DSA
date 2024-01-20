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
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
    cout<<endl;
};
Node *reverseDLL(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *prev=NULL;
    Node *current_node=head;
    while(current_node!=NULL){
        prev=current_node->prev;
        current_node->prev=current_node->next;
        current_node->next=prev;
        current_node=current_node->prev;
    }
    return prev->prev;
};
int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;

    traverse(head);
    head=reverseDLL(head);
    traverse(head);
   return 0;
}