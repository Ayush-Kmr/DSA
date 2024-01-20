#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Traversing
void traverse(Node *head)
{
    Node *current_node=head;
    while (current_node != NULL)
    {
        cout << "Elements::" << current_node->data << endl;
        current_node = current_node->next;
    }
}

// Recursive Traversing
void re_traverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    re_traverse(head->next);
    cout << "Reverse:" << head->data << endl;
}

// Insertion at beginning
void insert(Node *head)
{
    Node *temp = new Node(90);
    temp->next = head;
    head = temp;
    traverse(head);
};

// Insertion at end
void insertend(Node *head)
{
    Node *current_node = head;
    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }
    Node *temp = new Node(200);
    current_node->next = temp;
    temp->next = NULL;
    traverse(head);
}

// Insertion at given node
void insertgivnod(Node *head)
{
    int pos;
    Node *current_node = head;
    cout << "Enter the node position where you want to insert:";
    cin >> pos;
    int i = 0;
    while (i != pos - 1)
    {
        current_node = current_node->next;
        i++;
    }
    Node *temp = new Node(12);
    temp->next = current_node->next;
    current_node->next = temp;
    traverse(head);
}

// Deletion at end
void deletetail(Node *head)
{
    Node *current_node = head;
    while (current_node->next->next != NULL)
    {
        current_node = current_node->next;
    }
    delete (current_node->next);
    current_node->next = NULL;
    traverse(head);
}

// Deletion at beginning
void deletebegin(Node *head)
{
    Node *temp = head->next;
    delete (head);
    head = temp;
    traverse(head);
}

// Deletion at given node
void deletegivnod(Node *head)
{
    Node *current_node = head;
    Node *current = head->next;
    int pos;
    cout << "Enter the node position which you want to delete:";
    cin >> pos;
    int i = 0;
    while (i != pos - 1)
    {
        current_node = current_node->next;
        current = current->next;
        i++;
    }
    current_node->next = current->next;
    free(current);
    traverse(head);
}

// Searching value in Singly LL
void search(Node *head)
{
    Node *current_node = head;
    int value;
    cout << "Enter the valid value:";
    cin >> value;
    while (current_node != NULL)
    {
        if (current_node->data == value)
        {
            cout << "Valid" << endl;
            break;
        }
        else
        {
            current_node = current_node->next; 
             cout << "Not valid" << endl;         
        }
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

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
        re_traverse(head);
        break;
    }
    case 3:
    {
        insert(head);
        break;
    }
    case 4:
    {
        insertend(head);
        break;
    }
    case 5:
    {
        insertgivnod(head);
        break;
    }
    case 6:
    {
        deletetail(head);
        break;
    }
    case 7:
    {
        deletebegin(head);
    }
    case 8:
    {
        deletegivnod(head);
        break;
    }
    case 9:
    {
        search(head);
        break;
    }
    default:
        break;
    }
    return 0;
}