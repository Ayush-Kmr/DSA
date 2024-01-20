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
void traversing(Node *head){
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    traversing(head);
   return 0;
}