#include <iostream>
#include <list>

using namespace std;

void deleteValue(list<int> &l, int value)
{
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        if (*it == value)
        {
            l.erase(it);
            break;  // Exit the loop after removing the first occurrence
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

    cout << "List before modification: ";
    printList(l);

    cout << "Input a value to delete: ";
    cin >> value;

    deleteValue(l, value);

    cout << "List after modification: ";
    printList(l);

    return 0;
}
