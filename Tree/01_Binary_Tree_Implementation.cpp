// Implementation of Binary Tree

#include <iostream>
#include <queue>
#include <climits>
using namespace std;
int maxLevel = 0;

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
    void LevelOrder(Node *root)
    {
        if (root == NULL)
            return;
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            Node *curr = q.front();
            q.pop();
            cout << (curr->data) << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    void _LevelOrderLineByLine(Node *root)
    {
        if (root == NULL)
            return;
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (q.size() > 1)
        {
            Node *curr = q.front();
            q.pop();
            if (curr == NULL)
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            cout << (curr->data) << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    void LevelOrderLineByLine(Node *root)
    {
        if (root == NULL)
            return;
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                Node *curr = q.front();
                q.pop();
                cout << curr->data << " ";
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
            cout << endl;
        }
    }
    int Height(Node *root)
    {
        if (root == NULL)
            return 0;
        int left = Height(root->left);
        int right = Height(root->right);
        if (left > right)
            return left + 1;
        else
            return right + 1;
    }
    int getSize(Node *root)
    {
        if (root == NULL)
            return 0;
        else
        {
            return 1 + getSize(root->left) + getSize(root->right);
        }
    }
    int getMax(Node *root)
    {
        if (root == NULL)
        {
            return INT_MIN;
        }
        return std::max(std::max(getMax(root->left), getMax(root->right)), root->data);
    }
    // void left(Node *root, int level, int &maxLevel)
    // {

    //     if (root == NULL)
    //         return;
    //     if (maxLevel < level)
    //     {
    //         cout << root->data << " ";
    //         maxLevel = level;
    //     }
    //     left(root->right, level + 1, maxLevel);
    //     left(root->left, level + 1, maxLevel);
    // }
    void left(Node *root, int level)
    {
        if (root == NULL)
            return;
        cout << "For" << root->data << "LEVEL:" << level << " " << "MAXLEVEL:" << maxLevel << endl;
        if (maxLevel < level)
        {
            cout << root->data << " ";
            maxLevel = level;
        }
        left(root->left, level + 1);
        left(root->right, level + 1);
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
    void levelOrder()
    {
        LevelOrder(root);
    }
    void levelOrderLineByLine()
    {
        LevelOrderLineByLine(root);
    }
    int height()
    {
        return Height(root);
    }
    int size()
    {
        return getSize(root);
    }
    int max()
    {
        return getMax(root);
    }
    void leftView()
    {
        left(root, 1);
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
    // cout << t.height() << endl;
    // t.inOrder();
    // cout << endl;
    // t.preOrder();
    // cout << endl;
    // t.postOrder();
    // cout << endl;
    t.levelOrderLineByLine();
    // cout << t.max();
    t.leftView();
    return 0;
}