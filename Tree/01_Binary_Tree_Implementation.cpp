// Implementation of Binary Tree

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Tree
{
private:
    Node *root;
    void insertion(int x, Node *&curr)
    {
        if (curr == NULL)
        {
            curr = new Node(x);
            return;
        }
        if (curr->data < x)
        {
            insertion(x, curr->right);
        }
        else
        {
            insertion(x, curr->left);
        }
    }
    void InOrder(Node *curr)
    {
        if (curr == NULL)
            return;
        InOrder(curr->left);
        cout << curr->data << " ";
        InOrder(curr->right);
    }
    void PreOrder(Node *curr)
    {
        if (curr == NULL)
            return;
        cout << curr->data << " ";
        PreOrder(curr->left);
        PreOrder(curr->right);
    }
    void PostOrder(Node *curr)
    {
        if (curr == NULL)
            return;
        PostOrder(curr->left);
        PostOrder(curr->right);
        cout << curr->data << " ";
    }
    int Height(Node *curr)
    {
        if (curr == NULL)
            return 0;
        int left = Height(curr->left);
        int right = Height(curr->right);
        if (left > right)
            return left + 1;
        else
            return right + 1;
    }

public:
    Tree(int x)
    {
        root = new Node(x);
    }
    void insert(int x)
    {
        insertion(x, root);
    }
    void inOrder()
    {
        InOrder(root);
    }
    void preOrder()
    {
        PreOrder(root);
    }
    void postOrder()
    {
        PostOrder(root);
    }
    int height()
    {
        Height(root);
    }
};

int main()
{
    Tree t(10);
    cout << t.height() << endl;
    t.insert(5);
    cout << t.height() << endl;
    t.insert(4);
    t.insert(8);
    t.insert(15);
    t.insert(12);
    t.insert(18);
    cout << t.height() << endl;
    t.inOrder();
    cout << endl;
    t.preOrder();
    cout << endl;
    t.postOrder();
    cout << endl;
    return 0;
}