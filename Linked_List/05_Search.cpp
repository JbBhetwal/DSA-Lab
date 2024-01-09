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
}

int search(Node *head, int x)
{
    int pos = 0;
    Node *curr = head;
    while (curr->data != x)
    {
        cout << curr->data << endl;
        if (curr == NULL)
        {
            return -1;
        }
        curr = curr->next;
        pos++;
    }
    return pos;
}

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 10);
    head = insertBeg(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    printList(head);

    cout << search(head, 20);
    return 0;
}