#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *Nodelist(Node *head){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    Node *newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    Node *temp;
    if(head==NULL){
        head=newnode;
        temp=head;
        return(head);
    }
    else{
        temp->next=newnode;
        temp=newnode;
        return (head);
    }
}
void *traverse(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of nodes you want to create:";
    cin>>n;
    Node *head=NULL;
    for(int i=0; i<n; i++){
        head=Nodelist(head);
    }
    traverse(head);
   return 0;
}