// Print the middle of the linked list

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

// Print middle of the linked list
void printMiddle(Node *head)
{
    if (head == NULL)
        return;
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

// Print nth node from the end of the linked list
void printNthNodefromEnd(Node *head, int n)
{
    Node *front = head, *back = head;
    if (head == NULL)
        return;
    for (int i = 0; i < n; i++)
    {
        front = front->next;
        if (front == NULL)
            return;
    }
    while (front != NULL)
    {
        front = front->next;
        back = back->next;
    }
    cout << back->data;
}

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 10);
    head = insertBeg(head, 20);
    head = insertEnd(head, 30);
    head = insertBeg(head, 50);
    head = insertBeg(head, 00);
    head = insertBeg(head, 90);

    printList(head);

    printNthNodefromEnd(head, 4);
    return 0;
}