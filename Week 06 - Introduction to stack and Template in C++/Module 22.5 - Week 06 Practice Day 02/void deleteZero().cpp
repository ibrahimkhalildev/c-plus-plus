#include <bits/stdc++.h>

using namespace std;

void deleteZero(list<int> &lst)
{
    for (auto it = lst.begin(); it != lst.end();)
    {
        if (*it == 0)
            it = lst.erase(it);
        else
            it++;
    }
}

int main()
{
    list<int> l;

    int n, input;

    cout << "Enter the Number of Elements: ";
    cin >> n;

    cout << "Input Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        l.push_back(input);
    }

    deleteZero(l);

    cout << "After Deleting Zero: ";
    for (int item : l)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}