#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int id;
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

    node *CreateNewNode(int id)
    {
        node *newNode = new node;
        newNode->id = id;
        newNode->Left = NULL;
        newNode->Right = NULL;
        newNode->parent = NULL;

        return newNode;
    }

    void build_binary_tree()
    {
        // node *allNode[6];
        for (int i = 0; i < 6; i++)
            allNode[i] = CreateNewNode(i);

        allNode[0]->Left = allNode[1];
        allNode[0]->Right = allNode[2];

        allNode[1]->Left = allNode[5];
        allNode[1]->parent = allNode[0];

        allNode[2]->Left = allNode[3];
        allNode[2]->Right = allNode[4];
        allNode[2]->parent = allNode[0];

        allNode[5]->parent = allNode[1];

        allNode[3]->parent = allNode[2];
        allNode[4]->parent = allNode[2];

        root = allNode[0];
    }

    void print_tree_info()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allNode[i]->parent != NULL)
                p = allNode[i]->parent->id;
            if (allNode[i]->Left != NULL)
                l = allNode[i]->Left->id;
            if (allNode[i]->Right != NULL)
                r = allNode[i]->Right->id;
            cout << "Node " << i << ": Parent = " << p << " , Left Child = " << l << " , Right Child = " << r << "\n";
        }
    }

    void BFS()
    {
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
};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    // bt.BFS();
    // bt.DFS(bt.root);

    // Preorder
    // bt.Preorder(bt.root);
    // Postorder
    bt.Postorder(bt.root);

    return 0;
}