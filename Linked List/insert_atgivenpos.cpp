#include <iostream>
using namespace std;
  
// A linked list Node
struct Node {
    int data;
    struct Node* next;
};
  
// Size of linked list
int size = 0;
  
// function to create and return a Node
Node* getNode(int data)
{
    // allocating space
    Node* newNode = new Node();
  
    // inserting the required data
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
  
// function to insert a Node at required position
void insertPos(Node** current, int pos, int data)
{
    // This condition to check whether the
    // position given is valid or not.
    if (pos < 1 || pos > size + 1)
        cout << "Invalid position!" << endl;
    else {
  
        // Keep looping until the pos is zero
        while (pos--) {
  
            if (pos == 0) {
  
                // adding Node at required position
                Node* temp = getNode(data);
  
                // Making the new Node to point to 
                // the old Node at the same position
                temp->next = *current;
  
                // Changing the pointer of the Node previous 
                // to the old Node to point to the new Node
                *current = temp;
            }
            else
              // Assign double pointer variable to point to the 
              // pointer pointing to the address of next Node 
              current = &(*current)->next;
        }
        size++;
    }
}
void traverse(struct Node* head)
{
    while (head != NULL) {
        cout << " " << head->data;
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    head = getNode(3);
    head->next = getNode(5);
    head->next->next = getNode(8);
    head->next->next->next = getNode(10);
  
    size = 4;
  
    cout << "Linked list before insertion: ";
    traverse(head);
  
    int data = 12, pos = 3;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 12 at position 3: ";
    traverse(head);
  
    // front of the linked list
    data = 1, pos = 1;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 1 at position 1: ";
    traverse(head);
  
    // insertion at end of the linked list
    data = 15, pos = 7;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 15 at position 7: ";
    traverse(head);
  
    return 0;
}