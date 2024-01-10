// Insertion,Reversal and Deletion in Doubly Linked List

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
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Insertion at the beginning
Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if (head != NULL)
    {
        temp->next->prev = temp;
    }

    return temp;
}

// Insertion at the End
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

// Delete Head
Node *delHead(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    else
    {
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        Node *temp = head;
        head->prev = NULL;
        head = head->next;

        delete temp;
        return head;
    }
}

// Delete end of the doublu Linked list
Node *delEnd(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
        return head;
    }
}

// Reverse a doubly linked list
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *temp;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return temp->prev;
}

int main()
{
    Node *head = NULL;
    head = insertEnd(head, 5);
    head = insertEnd(head, 15);
    head = insertEnd(head, 25);
    head = insertEnd(head, 35);
    printList(head);
    // head = reverse(head);
    // printList(head);

    head = delEnd(head);
    printList(head);
    return 0;
}