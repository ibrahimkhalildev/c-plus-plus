#include <bits/stdc++.h>

using namespace std;

bool search(const list<int> & l, int value)
{
    for(int item : l)
    {
        if(item == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    list<int> l;
    int n, value, input;
    cout << "Number of Elements: ";
    cin >> n;

    cout << "Input Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        l.push_back(input);
    }

    cout << "Search the Number: ";
    cin >> value;

    if (search(l, value) == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}