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

// Traversing 
void traverse(Node *head){
   if(head==NULL){
      return;
   }
   cout<<head->data<<" ";
   for(Node *p=head->next; p!=head; p=p->next){
      cout<<p->data<<" ";
   }
}
// Insertion at Beginning
void insertbeg(Node *head){
   Node *temp=new Node(90);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        Node *current=head;
        while(current->next!=head){
            current=current->next;
        }
        current->next=temp;
        temp->next=head;
    }
    traverse(temp);
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;

    int ch;
    cout<<"Enter your choice:";
    cin>>ch;
    switch (ch)
    {
    case 1:traverse(head);
      break;
    case 2:insertbeg(head);
      break;
    default:
      break;
    }
   return 0;
}