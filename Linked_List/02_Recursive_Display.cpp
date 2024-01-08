
// Implement of recursive display in linked list

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
    if (head == NULL)
    {
        return;
    }
    Node *curr = head;
    cout << curr->data << " ";
    printList(curr->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(40);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(90);

    printList(head);
    return 0;
}