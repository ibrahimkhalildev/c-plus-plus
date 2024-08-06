#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *Parent;
};

class BinaryTree
{
public:
    node *root;
    // node *allnode[7];

    BinaryTree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;
        return newnode;
    }

    // void build_binary_tree()
    // {
    //     for (int i = 0; i < 7; i++)
    //         allnode[i] = CreateNewNode(i);

    //     allnode[0]->Left = allnode[1];
    //     allnode[0]->Right = allnode[2];

    //     allnode[1]->Parent = allnode[0];
    //     allnode[2]->Parent = allnode[0];

    //     allnode[1]->Left = allnode[5];
    //     allnode[1]->Right = allnode[6];

    //     allnode[5]->Parent = allnode[1];
    //     allnode[6]->Parent = allnode[1];

    //     allnode[2]->Left = allnode[3];
    //     allnode[2]->Right = allnode[4];

    //     allnode[3]->Parent = allnode[2];
    //     allnode[4]->Parent = allnode[2];

    //     root = allnode[0];
    // }

    void Insertion(int id)
    {
        node *newnode = CreateNewNode(id);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
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
                a->Left = newnode;
                newnode->Parent = a;
                return;
            }

            if (a->Right != NULL)
            {
                q.push(a->Right);
            }
            else
            {
                a->Right = newnode;
                newnode->Parent = a;
                return;
            }
        }
    }

    // BFS Search
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
            if (a->Parent != NULL)
                p = a->Parent->id;
            cout << "Node id ->  " << a->id << " Left Chile -> " << l;
            cout << " & Right Child -> " << r << " Parent id = " << p << '\n';
        }
    }
};

int main()
{
    BinaryTree bt;
    // bt.build_binary_tree();

    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);
    bt.Insertion(7);
    bt.Insertion(9);
    bt.BFS();

    return 0;
}
