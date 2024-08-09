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

    void DisplayTree()
    {
        if (root == NULL)
        {
            cout << "Tree is empty\n";
            return;
        }
        BFS();
    }

    int countNodes(Node *node)
    {
        if (node == NULL)
            return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    bool isCompleteBinaryTree()
    {
        if (root == NULL)
            return true;
        int nodeCount = countNodes(root);
        queue<Node *> q;
        q.push(root);
        bool flag = false;

        while (!q.empty())
        {
            Node *node = q.front();
            q.pop();

            if (node->left)
            {
                if (flag)
                    return false;
                q.push(node->left);
            }
            else
                flag = true;
            if (node->right)
            {
                if (flag)
                    flag = true;
                q.push(node->right);
            }
            else
                flag = true;
        }
        return true;
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
    a.insertBST(9);
    a.insertBST(13);

    cout << "BFS tree: \n";
    a.DisplayTree();

    if (a.isCompleteBinaryTree())
        cout << "Tree is a complete Binary Tree!\n";
    else
        cout << "Tree is not a Complete Binary Tree!\n";

    return 0;
}
