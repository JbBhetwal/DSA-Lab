// Implementation, Insertions in Circular Doubly Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

// Print all the values of Linked list
void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}

// Insertion at beginning
Node *insertBeg(Node *head, int x)
{

    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
}

// Insert at the end
Node *insertEnd(Node *head, int x)
{
    head = insertBeg(head, x);
    return head->next;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    printList(head);
    return 0;
}