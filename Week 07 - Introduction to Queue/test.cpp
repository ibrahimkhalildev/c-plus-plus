#include <bits/stdc++.h>
using namespace std;

void deleteValue(list<int> &l, int value)
{
    auto it = find(l.begin(), l.end(), value);
    if (it != l.end())
    {
        l.erase(it);
    }
}

int main()
{
    list<int> myList;
    int num, value;

    cout << "Enter integers for the list (type 'q' to stop): ";
    while (cin >> num)
    {
        myList.push_back(num);
    }



    cout << "Enter the value to delete: ";
    cin >> value;

    // Display the original list
    cout << "Original list: ";
    for (const auto &elem : myList)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Delete the value
    deleteValue(myList, value);

    // Display the list after deletion
    cout << "List after deletion: ";
    for (const auto &elem : myList)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
