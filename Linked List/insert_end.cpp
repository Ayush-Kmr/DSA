#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertEnd(Node *head,int x){
    Node*temp=new Node(x);
    if(head==NULL)
    return temp;

    Node *current_node=head;
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
        current_node->next=temp;
        return head;
}
void traverse(Node *head){
    Node* current_node=head;
    while(current_node!=NULL){
         cout<<current_node->data<<" ";
         current_node=current_node->next;
    }
}
int main()
{
    Node *head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);

   traverse(head);
   return 0;
}