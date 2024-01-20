#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int isempty(Node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(Node *top){
    Node *newnode=new Node;
    if(newnode==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
Node *push(Node *top,int x){
    if(isfull(top)){
        cout<<"Overflow"<<endl;
    }
    Node *y=new Node;
    y->data=x;
    y->next=top;
    top=y;
    return top;
}
Node *pop(Node *top){
    if(isempty(top)){
        cout<<"Underflow"<<endl;
    }
    Node *z=top;
    top=top->next;
    free(z);
    return top;
}
Node *peek(Node *top){
    cout<<"Peek value is:"<<top->data;
}
void traversal(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *top=new Node;
    top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    top=push(top,6);
    top=push(top,7);
    top=push(top,8);
    top=push(top,9);
    top=push(top,10);
    cout<<"After pushing the value is:"<<" ";
    traversal(top);
    cout<<endl;
    cout<<"Peek value is";
    peek(top);
    cout<<endl;
    cout<<"After the poping the value is:"<<" ";
    top=pop(top);
    traversal(top);
   return 0;
}