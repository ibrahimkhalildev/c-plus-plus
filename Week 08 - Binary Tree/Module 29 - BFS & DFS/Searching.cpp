#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int id;
    int value;
    node *Left;
    node *Right;
    node *parent;
};

class BinaryTree
{
public:
    node *root;
    node *allNode[6];
    BinaryTree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id, int value)
    {
        node *newNode = new node;
        newNode->id = id;
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        newNode->parent = NULL;

        return newNode;
    }

    void Insertion(int id, int value)
    {
        node *newNode = CreateNewNode(id, value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }

        // BFS Visit
        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            if (a->Left != NULL)
            {
                q.push(a->Left);
            }
            else
            {
                a->Left = newNode;
                newNode->parent = a;
                return;
            }
            if (a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }

    void BFS()
    {
        if (root == NULL)
            return;
        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if (a->parent != NULL)
                p = a->parent->id;
            cout << "Node id = " << a->id << " Left Child = " << l;
            cout << " Right Child = " << r << " Parent id = " << p << "\n";
        }
    }

    void DFS(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        DFS(a->Left);
        DFS(a->Right);
    }

    // Inorder
    void Inorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout << a->id << " ";
        Inorder(a->Right);
    }

    // Preorder
    void Preorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        Preorder(a->Left);
        Preorder(a->Right);
    }
    // Postorder
    void Postorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Postorder(a->Left);
        Postorder(a->Right);
        cout << a->id << " ";
    }

    // Search
    void Search(node *a, int value)
    {
        if (a == NULL)
            return;
        if (a->value == value)
        {
            cout << a->id << " ";
        }
        Search(a->Left, value);
        Search(a->Right, value);
    }
};

int main()
{
    BinaryTree bt;
    bt.Insertion(0, 5);
    bt.Insertion(1, 10);
    bt.Insertion(2, 10);
    bt.Insertion(3, 9);
    bt.Insertion(4, 8);
    bt.Insertion(5, 5);
    bt.Insertion(6, 7);

    bt.BFS();

    cout << endl;
    bt.Search(bt.root, 5);
    cout << '\n';
    bt.Search(bt.root, 10);

    return 0;
}