#include <bits/stdc++.h>

using namespace std;

int getValue(const list<int> & l, int index)
{
    if(index < 0 || index >= l.size())
    {
        return -1;
    }

    auto it = l.begin();
    advance(it, index);

    return *it;
}

int main()
{
    list<int> l;
    int n, index, value;
    cout << "Enter the Element Number: ";
    cin >> n;

    cout << "Input Elements of the list: ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        l.push_back(element);
    }

    cout << "Enter Index Number: ";
    cin >> index;

    value = getValue(l, index);

    if (value != -1)
    {
        cout << "The Value is " << value << endl;
    }
    else
    {
        cout << "Index out of bounds!" << endl;
    }

    return 0;
}