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
Node *delhead(Node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        Node *temp=head->next;
        delete head;
        return temp;
    }
}

void traverse(Node *head){
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
    cout<<endl;
}
 int main(){
      Node *head=new Node(10);
      head->next=new Node(20);
      head->next->next=new Node(30);
      head->next->next->next=new Node(40);

      traverse(head);
      head=delhead(head);
      traverse(head);
   return 0;
}