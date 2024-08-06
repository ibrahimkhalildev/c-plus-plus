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
};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    bt.print_tree_info();
    return 0;
}