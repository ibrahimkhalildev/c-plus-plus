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
    void DisplayTree()
    {
        if (root == NULL)
        {
            cout << "Tree is Empty!\n";
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (q.empty() == false)
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

    // Finding maximum value
    int find_Max()
    {
        if (root == NULL)
        {
            return -1;
        }
        Node *current = root;
        while (current->right != NULL)
        {
            current = current->right;
        }
        return current->value;
    }
};
int main()
{
    BST a;
    a.insertBST(8);
    a.insertBST(11);
    a.insertBST(6);
    a.insertBST(4);
    a.insertBST(7);
    a.insertBST(100);
    a.insertBST(9);
    a.insertBST(13);

    a.DisplayTree();

    int max_value = a.find_Max();
    if (max_value == -1)
    {
        cout << "Tree is empty!\n";
    }
    else
    {
        cout << "Maximum value is the BST: " << max_value << endl;
    }

    return 0;

    return 0;
}
