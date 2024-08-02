#include <bits/stdc++.h>

using namespace std;

void deleteValue(list<int> &l, int value)
{
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        if (*it == value)
        {
            l.erase(it);
            break;
        }
    }
}

void printList(const list<int> &l)
{
    for (int num : l)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{

    list<int> l = {7, 3, 8, 4, 5, 4};
    int value;

    cout << "Given List: \n";
    printList(l);

    cout << "Enter a value to delete: \n";
    cin >> value;

    deleteValue(l, value);

    cout << "List after Delete: \n";
    printList(l);

    return 0;
}
