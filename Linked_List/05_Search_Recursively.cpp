// Search the given data and return the correspondimg position of the linked list

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

int search(Node *head, int x)
{
    int pos;
    Node *curr = head;
    if (curr == NULL)
    {
        return -1;
    }
    if (curr->data == x)
    {
        return 1;
    }
    else
    {
        pos = search(curr->next, x);
        if (pos == -1)
        {
            return -1;
        }
        else
        {
            return pos + 1;
        }
    }
}

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 10);
    head = insertBeg(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 90);
    head = insertEnd(head, 0);
    head = insertEnd(head, 80);

    printList(head);

    cout << search(head, 40);
    return 0;
}