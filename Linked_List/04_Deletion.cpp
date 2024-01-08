// Deletion at beginning, middle and end of the linked list

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

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

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
    return head;
}

Node *delHead(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *delEnd(Node *head)
{
    if (head == NULL)
    {

        return NULL;
    }
    else if (head->next == NULL)
    {
        // Node *temp=head->next;
        delete head->next;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = NULL;
        return head;
    }
}

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 10);
    head = insertBeg(head, 20);
    head = insertEnd(head, 30);

    printList(head);

    head = delHead(head);
    printList(head);

    head = delEnd(head);
    printList(head);
    return 0;
}