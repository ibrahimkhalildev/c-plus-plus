#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(12);
    l.push_back(32);

    l.push_front(100);
    //Sort as ascending order
    l.sort();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    //Sort as descending order
    cout << endl;
    l.sort(greater<int>());

    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    // //First value



    // cout << endl;
    // cout << endl;

    // cout <<"Value of First Position: " << l.front() << "\n";
    // //Last Value
    // cout <<"Value of Last Position: " << l.back() << "\n";

    // l.pop_front();

    // cout <<"After Delete first Element: "<< l.front() << "\n\n";

    // cout<<"All Elements after Delete: ";
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout<< *it << " ";
    // }

    cout << endl;


    return 0;
}
