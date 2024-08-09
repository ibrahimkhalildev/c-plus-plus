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
            cout << "Tree is Empty\n";
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
    }

    bool find(int value)
    {
        if (root == NULL)
            return false;
        Node *tmp = root;
        while (tmp != NULL)
        {
            if (value > tmp->value)
            {
                tmp = tmp->right;
            }
            else if (value < tmp->value)
            {
                tmp = tmp->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

    void DeleteNode(int value)
    {
        if (find(value) == true)
        {
            Node *current = root;
            Node *previous = NULL;
            while (current != NULL)
            {
                if (value > current->value)
                {
                    previous = current;
                    current = current->right;
                }
                else if (value < current->value)
                {
                    previous = current;
                    current = current->left;
                }
                else
                {
                    break;
                }
            }
            // Node has no child
            if (current->left == NULL and current->right == NULL)
            {
                Node *delNode = current;
                if (previous->right != NULL and previous->right->value == value)
                {
                    previous->right = NULL;
                }
                else
                {
                    previous->left = NULL;
                }
                delete delNode;
                return;
            }
            // Node has 1 child
            if (current->left != NULL and current->right == NULL)
            {
                Node *delNode = current->left;
                current->value = current->left->value;
                current->left = NULL;
                delete delNode;
            }
            if (current->right != NULL and current->left == NULL)
            {
                Node *delNode = current->right;
                current->value = current->right->value;
                current->right = NULL;
                delete delNode;
            }

            // Node have 2 childs
            if (current->left != NULL and current->right != NULL)
            {
                Node *delNode = current->left;
                current->value = current->left->value;
                current->left = NULL;
                delete delNode;
                return;
            }
        }
        else
        {
            cout << "Node not found!\n";
        }
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

    a.DisplayTree();

    if (a.find(9) == true)
        cout << "\nExist\n";
    else
        cout << "\nNot found\n";

    a.DeleteNode(13);

    cout << "\nAfter Delete: \n";
    a.DisplayTree();

    return 0;
}
