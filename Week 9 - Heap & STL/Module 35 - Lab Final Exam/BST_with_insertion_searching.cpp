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

    void Insert(int value)
    {
        Node *newNode = new Node(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        Node *current = root;
        Node *parent = NULL;

        while (true)
        {
            parent = current;
            if (value < current->value)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = newNode;
                    return;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }

    bool Search(int value)
    {
        Node *current = root;
        while (current != NULL)
        {
            if (current->value == value)
            {
                return true;
            }
            else if (value < current->value)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
        return false;
    }

    void DisplayTree()
    {
        if (root == NULL)
        {
            cout << "Tree is empty!\n";
            return;
        }
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *frontNode = q.front();
            cout << frontNode->value << " ";
            if (frontNode->left != NULL)
                q.push(frontNode->left);
            if (frontNode->right != NULL)
                q.push(frontNode->right);
            q.pop();
        }
        cout << endl;
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);

    bst.DisplayTree();
    cout << "\n";

    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;


    return 0;
}
