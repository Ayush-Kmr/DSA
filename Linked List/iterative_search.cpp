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
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<" ";
        current_node=current_node->next;
    }
    cout<<endl;
}
int search(Node *head, int x){
    int pos=1;
    Node *current_node=head;
    while(current_node!=NULL){
        if(current_node->data==x)
               return pos;
        else{
            pos++;
            current_node=current_node->next;
        }
    }
    return -1;
}
int main()
{
    int x;
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    
    traverse(head);
    cout<<"Enter the element you want to search :";
    cin>>x;
    cout<<"Position of the element in linked list: "<<search(head,x);
    
    return 0;
}