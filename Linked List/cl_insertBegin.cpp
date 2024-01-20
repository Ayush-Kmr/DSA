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
void traverse(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    for(Node *p=head->next; p!=head; p=p->next){
        cout<<p->data<<" ";
    }
}
Node *insertbegin(Node *head, int x){ 
    Node *temp=new Node(x);
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
    return temp;
}
int main()
{
    Node *head=NULL;
    head=insertbegin(head,60);
    head=insertbegin(head,50);
    head=insertbegin(head,40);
    head=insertbegin(head,30);
    head=insertbegin(head,20);
    head=insertbegin(head,10);
    traverse(head);

   return 0;
}