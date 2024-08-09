
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    void insertBST(int value)
    {
        Node *newNode = new Node(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        Node *current = root;
        Node *previous = NULL;

        while (current != NULL)
        {
            previous = current;
            if (value > current->value)
            {
                current = current->right;
            }
            else
            {
                current = current->left;
            }
        }
        if (value > previous->value)
        {
            previous->right = newNode;
        }
        else
        {
            previous->left = newNode;
        }
    }

    void BFS()
    {
        if (root == NULL)
        {
            cout << "Tree is Empty\n";
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *frontNode = q.front();
            cout << frontNode->value << " ";
            if (frontNode->left != NULL)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right != NULL)
            {
                q.push(frontNode->right);
            }
            q.pop();
        }
        cout << endl;
    }
    // Display DFS
    void DisplayTree()
    {
        if (root == NULL)
        {
            cout << "Tree is empty\n";
            return;
        }
        BFS();
    }
    // Checkin Perfect Binary tree or not
    int depth(Node *node)
    {
        int d = 0;
        while (node != NULL)
        {
            d++;
            node = node->left;
        }
        return d;
    }
    bool isPerfect_DFS(Node *node, int depth, int level)
    {
        if (node == NULL)
        {
            return true;
        }
        if (node->left == NULL && node->right == NULL)
        {
            return (depth == level + 1);
        }
        if (node->left == NULL || node->right == NULL)
        {
            return false;
        }
        return isPerfect_DFS(node->left, depth, level + 1) && isPerfect_DFS(node->right, depth, level + 1);
    }

    bool isPerfectBinaryTree()
    {
        int d = depth(root);
        return isPerfect_DFS(root, d, 0);
    }
};

int main()
{
    BST a;
    a.insertBST(4);
    a.insertBST(2);
    a.insertBST(1);
    a.insertBST(8);

    cout << "BFS tree: \n";
    a.DisplayTree();

    if (a.isPerfectBinaryTree())
        cout << "Tree is a Perfect Binary Tree.\n";
    else
        cout << "Tree is not a Perfect Binary Tree!\n";
}
