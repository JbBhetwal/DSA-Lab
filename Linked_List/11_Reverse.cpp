// Print the middle of the linked list

#include <iostream>
#include <vector>
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

Node *reverse(Node *head)
{
    // vector<int> arr;
    // Node *curr = head;
    // while (curr != NULL)
    // {
    //     arr.push_back(curr->data);
    //     curr = curr->next;
    // }
    // curr = head;
    // while (curr != NULL)
    // {
    //     curr->data = arr.back();
    //     arr.pop_back();
    //     curr = curr->next;
    // }
    // return head;

    // More Efficient
    //  Node *curr = head;
    //  Node *prev = NULL;
    //  Node *next = curr->next;
    //  while (curr != NULL)
    //  {
    //      next = curr->next;
    //      curr->next = prev;
    //      prev = curr;
    //      curr = next;
    //  }
    //  return prev;

    // Using Recursive method
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *rest_head = reverse(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
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

    head = reverse(head);
    printList(head);

    return 0;
}