#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *Node_list(Node *head){
    int data;
    cout<<"Enter your data:";
    cin>>data;
    cout<<endl; 
    Node *newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    Node *temp;
    if(head==NULL){
        head=newnode;
        temp=head;
        return head;
    }
    else{
        temp->next=newnode;
        temp=newnode;
        return head;
    }
}
void traverse(Node *head){
     Node *current_node=head;
     while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
     }
}
// Insertion At Beginning
Node *insert_beg(Node *head){
    int data;
    cout<<"Enter your data:";
    cin>>data;
    Node *temp=new Node;
    temp->data=data;
    if(head== NULL){
        cout<<"Overflow";
    }
    else{
        temp->next=head;
        head=temp;
        return(head);
    }
    
}

// Insertion At End
Node *insert_end(Node *head){
    Node *current_node=head;
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
    int data;
    cout<<"Enter your data ";
    cin>>data;
    Node *temp=new Node;
    temp->data=data;
    current_node->next=temp;
    temp->next=NULL;
    return(head);
}

// Insertion at given node
Node *insert_betw(Node *head){
    int pos,data;
    cout<<"Enter the node postion where you want to insert:";
    cin>>pos;
    cout<<"Enter your data:";
    cin>>data;
    int i=0;
    Node *current_node=head;
    Node *temp=new Node;
    while(i!=pos-1){
        current_node=current_node->next;
        i++;
    }
    temp->data=data;
    temp->next=current_node->next;
    current_node->next=temp;
    return(head);
}

// Deletion at beginning
Node *delete_beg(Node *head){
    Node *temp=head->next;
    free(head);
    head=temp;
    traverse(head);
}

// Deletion at end
Node *delete_end(Node *head){
    Node *current_node=head;
    while(current_node->next->next!=NULL){
        current_node=current_node->next;
    }
    free(current_node->next);
    current_node->next=NULL;
    return head;
    }
// Deleting Given Node
Node *delete_giv(Node *head){
    Node *current_node=head;
    Node *current=head->next;
    int pos,i=1;
    cout<<"Enter the node position you want to delete:";
    cin>>pos;
    while(i!=pos-1){
        current_node=current_node->next;
        current=current->next;
        i++;
    }
    current_node->next=current->next;
    free(current);
    traverse(head);
}
int main()
{
    int n;
    cout<<"Enter the number of nodes you want to create:";
    cin>>n;
    cout<<endl;
    Node *head=NULL;
    for (int i=0; i<n; i++){
        head=Node_list(head);
    }
    traverse(head);
    cout<<endl;
    int ch;
    cout<<"Enter your choice:";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
     case 1: {
        head=insert_beg(head);
        traverse(head);
        break;
    }
    case 2: {
        head=insert_end(head);
        traverse(head);
                break;

    }
    case 3: {
        head=insert_betw(head);
        traverse(head);
                break;

    }
    case 4: {
        head=delete_beg(head);
        traverse(head);
                break;

    }
    case 5: {
        head=delete_end(head);
        traverse(head);
                break;

    }
     case 6: {
        head=delete_giv(head);
        traverse(head);
                break;

    }
    default:
        break;
    }
   return 0;
}