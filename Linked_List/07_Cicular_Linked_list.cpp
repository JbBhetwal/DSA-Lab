// Circular Singly Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        next = NULL;
        data = x;
    }
};

// Insertion at the end

// Naive Solution
//  Node *insertEnd(Node *head, int x)
//  {
//      Node *curr = head;
//      Node *temp = new Node(x);
//      if (head == NULL)
//      {
//          temp->next = temp;
//          return temp;
//      }
//      while (curr->next != head)
//      {
//          curr = curr->next;
//      }
//      curr->next = temp;
//      temp->next = head;
//      return head;
//  }

// Effective Solution
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head;
    return head;
}

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
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    printList(head);
    return 0;
}