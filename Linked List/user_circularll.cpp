#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *Nodelist(Node *head)
{
    int data;
    cout << "Enter the data you want to insert:";
    cin >> data;
    Node *newnode = new Node;
    newnode->data = data;
    newnode->next = head;
    Node *temp;
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
        return (head);
    }
}
// Traversing In Circular Singly LL
void traverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}
// Insertion at beginning in circular ll
Node *insertbeg(Node *head)
{
    Node *current_node = head;
    Node *newnode = new Node;
    int data;
    cout << "Enter the data you want to insert:";
    cin >> data;
    while (current_node->next != head)
    {
        current_node = current_node->next;
    }
    newnode->data = data;
    current_node->next = newnode;
    newnode->next = head;
    head = newnode;
    return (head);
}
Node *insertend(Node *head)
{
    Node *current_node = head;
    int data;
    cout << "Enter the data:";
    cin >> data;
    Node *newnode = new Node;
    newnode->data = data;
    while (current_node->next != head)
    {
        current_node = current_node->next;
    }
    current_node->next = newnode;
    newnode->next = head;
    return (head);
}
Node *insertgiv(Node *head)
{
    Node *current_node = head;
    int data;
    cout << "Enter the data:";
    cin >> data;
    Node *newnode = new Node;
    int pos, i = 1;
    cout << "Enter the position where you want to insert:";
    cin >> pos;
    while (i != pos - 1)
    {
        current_node = current_node->next;
        i++;
    }
    newnode->data = data;
    newnode->next = current_node->next;
    current_node->next = newnode;
    return (head);
}
Node *deletebeg(Node *head)
{
    Node *current_node = head;
    Node *current = head->next;
    while (current_node->next != head)
    {
        current_node = current_node->next;
    }
    current_node->next = current;
    free(head);
    head = current;
    return (head);
}
Node *deleteend(Node *head)
{
    Node *current_node = head;
    while (current_node->next->next != head)
    {
        current_node = current_node->next;
    }
    free(current_node->next);
    current_node->next = head;
    return (head);
}
Node *deletegiv(Node *head){
    Node *current_node=head;
    Node *current=head->next;
    int pos,i=0;
    cout<<"Enter the node position which you want to delete:";
    cin>>pos;
    while(i!=pos-1){
        current_node=current_node->next;
        current=current->next;
        i++;
    }
    current_node->next=current->next;
    free(current);
    return head;

}
int main()
{
    Node *head = NULL;
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
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
        traverse(head);
        break;
    }
    case 2:
    {
        head = insertbeg(head);
        traverse(head);
        break;
    }
    case 3:
    {
        head = insertend(head);
        traverse(head);
        break;
    }
    case 4:
    {
        head = insertgiv(head);
        traverse(head);
        break;
    }
    case 5:
    {
        head = deletebeg(head);
        traverse(head);
        break;
    }
    case 6:
    {
        head = deleteend(head);
        traverse(head);
        break;
    }
     case 7:
    {
        head = deletegiv(head);
        traverse(head);
        break;
    }
    default:
        break;
    }
    return 0;
}