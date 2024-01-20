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
Node *deltail(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *current_node=head;
    while(current_node->next->next!=NULL){
        current_node=current_node->next;
    }
    delete(current_node->next);
    current_node->next=NULL;
    return head;
}
void traverse(Node *head){
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
            }
            cout<<endl;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);

    
    traverse(head);
    head=deltail(head);
    traverse(head);
   return 0;
}