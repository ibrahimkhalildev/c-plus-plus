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

    // Function to validate if the BST is valid
    bool isValidBST()
    {
        return isValidBSTUtil(root, LONG_MIN, LONG_MAX);
    }


    // Helper function to validate the BST
    bool isValidBSTUtil(Node* node, long minValue, long maxValue)
    {
        if (node == NULL)
        {
            return true;
        }

        if (node->value <= minValue || node->value >= maxValue)
        {
            return false;
        }

        return isValidBSTUtil(node->left, minValue, node->value) &&
               isValidBSTUtil(node->right, node->value, maxValue);
    }
};

int main()
{
    BST a;
    a.insertBST(100);
    a.insertBST(11);
    a.insertBST(6);
    a.insertBST(4);
    a.insertBST(7);
    a.insertBST(9);
    a.insertBST(13);

    a.DisplayTree();

    // Check if the tree is a valid BST
    if (a.isValidBST())
    {
        cout << "The tree is a valid BST." << endl;
    }
    else
    {
        cout << "The tree is not a valid BST." << endl;
    }

    return 0;
}
