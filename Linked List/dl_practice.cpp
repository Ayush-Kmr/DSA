#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
void traverse(Node *head)
{
    Node *current_node = head;
    while (current_node != NULL)
    {
        cout << current_node->data << " ";
        current_node = current_node->next;
    }
}
void insertbeg(Node *head){
    Node *newnode=new Node(50);
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=NULL;
    head=newnode;
    traverse(head);
}
void insertend(Node *head){
    Node *current_node=head;
    Node *newnode=new Node(90);
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
    current_node->next=newnode;
    newnode->prev=current_node;
    newnode->next=NULL;
    traverse(head);
}
void insertgiv(Node *head){
    int pos,i=0;
    cout<<"Enter the postion where you want to insert:";
    cin>>pos;
    Node *current_node=head;
    Node *newnode=new Node(80);
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    newnode->next=current_node->next;
    current_node->next=newnode;
    newnode->prev=current_node;
    traverse(head);
}
Node *deletebeg(Node *head){
    Node *current=head->next;
    free(head);
    head=current;
    current->prev=NULL;
    traverse(head);
}
Node *deleteend(Node *head){
    Node *current_node=head;
    Node *current=head->next;
    while(current->next!=NULL){
        current_node=current_node->next;
        current=current->next;
    }
    current->prev=NULL;
    current_node->next=NULL;
    free(current);
    traverse(head);
}
Node *deletegiv(Node *head){
    int pos,i=0;
    cout<<"Enter the position which you want to delete:";
    cin>>pos;
    Node *current_node=head;
    Node *current=head->next;
    while(i!=pos-1){
        current_node=current_node->next;
        current=current->next;
        i++;
    }
    current_node->next=current->next;
    // current->prev=NULL;
    // current->next=NULL;
    free(current);
    traverse(head);
}
Node *deletebefgiv(Node *head){
    Node *current_node=head;
    int pos=1,i=0;
    cout<<"Enter the positon before which node you want to delete:";
    cin>>pos;
    while(i!=pos){
        current_node=current_node->next;
        i++;
    }
    Node *x=current_node->prev->prev;
    Node *y=current_node->prev;
    current_node->prev=current_node->prev->prev;
    x->next=current_node;
    free(y);
    traverse(head);
} 
Node *deleteaftgiv(Node *head){
    Node *current_node=head;
    int pos,i=0;
    cout<<"Enter the position after which you want to delete:";
    cin>>pos;
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    Node *x=current_node->next->next;
    Node *y=current_node->next;
    current_node->next=current_node->next->next;
    x->prev=current_node;
    free(y);
    traverse(head);
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev=temp2;
    temp3->next=NULL;
    int ch;
    cout<<"Enter your choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:{
        insertbeg(head);
        break;
    }
    case 2:{
        insertend(head);
        break;
    }
    case 3:{
        insertgiv(head);
        break;
    }
    case 4:{
        deletebeg(head);
        break;
    }
    case 5:{
        deleteend(head);
        break;
    }
    case 6:{
        deletegiv(head);
        break;
    }
    case 7:{
        deletebefgiv(head);
        break;
    }
    case 8:{
        deleteaftgiv(head);
        break;
    }
    default:
        break;
    }

    return 0;
}