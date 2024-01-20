#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next = NULL;
    Node *prev = NULL;
};
Node *temp = NULL;
Node *Nodelist(Node *head)
{
    int data;
    cout << "Enter the data for the nodes:";
    cin >> data;
    Node *newnode = new Node;
    newnode->data = data;
    if (head == NULL)
    {
        head = temp = newnode;
        head->prev = newnode;
        temp->next = NULL;
        return head;
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        temp->next = NULL;
        return head;
    }
}
void *traverse(Node *head)
{
    Node *current_node = head;
    while (current_node != NULL)
    {
        cout << current_node->data << " ";
        current_node = current_node->next;
    }
}
// Insertion at beginning
Node *insertbeg(Node *head)
{
    int data;
    cout << "Enter the data you want to insert:";
    cin >> data;
    Node *newnode = new Node;
    Node *current_node = head;
    newnode->data = data;
    newnode->next = current_node;
    current_node->prev = newnode;
    newnode->prev = NULL;
    head = newnode;
    return head;
}
// Insertion at end
Node *insertend(Node *head)
{
    int data, i = 0;
    cout << "Enter the data you want to insert:";
    cin >> data;
    Node *current_node = head;
    Node *newnode = new Node;
    newnode->data = data;
    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    current_node->next=newnode;
    newnode->prev=current_node;
    newnode->next=NULL;
    return head;
}
// Insertion at given node positon
Node *insertgiv(Node *head){
    int data,pos,i=1;
    cout<<"Enter the position where you want to insert:";
    cin>>pos;
    cout<<"Enter the data you want to insert:";
    cin>>data;
    Node *current_node=head;
    Node *newnode=new Node;
    newnode->data=data;
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    newnode->next=current_node->next;
    current_node->next=newnode;
    newnode->prev=current_node;
    return head;
}
// Insertion after the given node
Node *insertaftgiv(Node *head){
    int data,pos,i=1;
    cout<<"Enter the position after which you want to insert:";
    cin>>pos;
    cout<<"Enter the data you want to insert:";
    cin>>data;
    Node *current_node=head;
    Node *newnode=new Node;
    newnode->data=data;
    while(i!=pos){
        current_node=current_node->next;
        i++;
    }
    newnode->next=current_node->next;
    current_node->next=newnode;
    newnode->prev=current_node;
    return head;
}
// Insertion before the given node
Node *insertbefgiv(Node *head){
    int data,position,i=0;
    cout<<"Enter the position before which you want to insert:";
    cin>>position;
    cout<<"Enter the data you want to insert:";
    cin>>data;
    Node *current_node=head;
    Node *newnode=new Node;
    newnode->data=data;
    while(i!=position-1){
        current_node=current_node->next;
        i++;
            }
    Node *x=current_node->prev;
    newnode->next=x->next;
    newnode->prev=x;
    x->next=newnode;
    return head;
}
// Deletion  at first
Node *deletebeg(Node *head){
    Node *temp=head->next;
    Node *current_node=head;
    free(current_node);
    head=temp;
    return head;
}
// Deletion at end
Node *deleteend(Node *head){
    Node *current_node=head;
    while(current_node->next->next!=NULL){
        current_node=current_node->next;
    }
    free(current_node->next);
    current_node->next=NULL;
    return head;
}
// Deletion of given node
Node *deletegiv(Node *head){
    int pos,i=1;
    cout<<"Enter the positon which you want to delete:";
    cin>>pos;
    Node *current_node=head;
    Node *current=head->next;
    while(i!=pos-1){
        current_node=current_node->next;
        current=current->next;
        i++;
    }
    current_node->next=current->next;
    free(current);
    return head;
}
// Deletion after the given node
Node *deleteaftgiv(Node *head){
    int pos,i=0;
    cout<<"Enter the position after which you want to delete the node:";
    cin>>pos;
    Node *current_node=head;
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    Node *x=current_node->next->next;
    free(current_node->next);
    current_node->next=x;
    x->prev=current_node;
    return head;
}
Node *deletebefgiv(Node *head){
    int pos,i=0;
    cout<<"Enter the position before which you want to delete:";
    cin>>pos;
    Node *current_node=head;
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    Node *x=current_node->prev->prev;
    x->next=current_node;
    free(current_node->prev);
    current_node->prev=x->next;
    return head;
}
int main()
{
    int n;
    cout << "Enter the number of nodes you want to create:";
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        head = Nodelist(head);
    }
    int ch;
    cout << "Enter your choice:";
    cin >> ch;
    cout << endl;
    switch (ch)
    {
    case 1:
    {
        head = insertbeg(head);
        traverse(head);
        break;
    }
    case 2:
    {
        head = insertend(head);
        traverse(head);
        break;
    }
    case 3:
    {
        head = insertgiv(head);
        traverse(head);
        break;
    }
    case 4:
    {
        head = insertaftgiv(head);
        traverse(head);
        break;
    }
    case 5:
    {
        head = insertbefgiv(head);
        traverse(head);
        break;
    }
    case 6:
    {
        head = deletebeg(head);
        traverse(head);
        break;
    }
    case 7:
    {
        head = deleteend(head);
        traverse(head);
        break;
    }
    case 8:
    {
        head = deletegiv(head);
        traverse(head);
        break;
    }
    case 9:
    {
        head = deleteaftgiv(head);
        traverse(head);
        break;
    }
    case 10:
    {
        head = deletebefgiv(head);
        traverse(head);
        break;
    }
    default:
        break;
    }
    return 0;
}