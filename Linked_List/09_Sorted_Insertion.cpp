// Insert in a sorted linked list
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

Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (temp->data < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL && (curr->next->data < temp->data))
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insert(head, 40);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 90);
    head = insert(head, 200);
    head = insert(head, 20);
    head = insert(head, 0);
    head = insert(head, 2);
    head = insert(head, 3);
    printList(head);
    return 0;
}