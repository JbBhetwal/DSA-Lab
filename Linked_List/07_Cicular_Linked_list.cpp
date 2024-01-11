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
// Insert after the head and then swap the datas.Temp acts as new head;
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
    return temp;
}

// Node *delHead(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     else if (head->next == head)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         Node *curr = head;
//         while (curr != head)
//         {
//             curr = curr->next;
//         };
//         curr->next = head->next;
//         delete head;
//         return curr->next;
//     }
// }

// Delete head
// put the data of head->next in head then delete head->next
Node *delHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == head)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        head->data = temp->data;
        head->next = temp->next;
        delete temp;
        return head;
    }
}

// Deletion of kth node from circulaar linked list
Node *delKthNode(Node *head, int k)
{
    Node *curr = head;
    if (k == 1)
    {
        head = delHead(head);
        return head;
    }
    for (int i = 1; i < k - 1; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
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
    cout << endl;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    // head = insertEnd(head, 20);
    // head = insertEnd(head, 30);
    // head = insertEnd(head, 40);
    // head = insertEnd(head, 50);
    // head = insertEnd(head, 60);
    printList(head);
    head = delKthNode(head, 1);
    printList(head);
    return 0;
}