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
    // Inorder Traverse
    void InOrderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        InOrderTraversal(node->left);
        cout << node->value << " ";
        InOrderTraversal(node->right);
    }

    // Preorder Traverse
    void PreorderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        cout << node->value << " ";
        PreorderTraversal(node->left);
        PreorderTraversal(node->right);
    }
    // Postorder Traverse
    void PostorderTraversal(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        PostorderTraversal(node->left);
        PostorderTraversal(node->right);
        cout << node->value << " ";
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

    void DisplayInOrder()
    {
        InOrderTraversal(root);
        cout << endl;
    }

    void DisplayPreOrder()
    {
        PreorderTraversal(root);
        cout << endl;
    }

    void DisplayPostOrder()
    {
        PostorderTraversal(root);
        cout << endl;
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

    cout << "Pre-order DFS\n";
    a.DisplayPreOrder();

    cout << "In-Order DFS\n";
    a.DisplayInOrder();

    cout << "Postrder DFS\n";
    a.DisplayPostOrder();

    return 0;
}
