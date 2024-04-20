// push_back(); // taking input
// pov_back(); // to delete last element
// back(); // to find last element
// size() // to get size
// front() // to get first element
// clear() // to clear an array
// empty() // return 1 or 0 / true false
// resize() //to resize existing vector size;
// sort()
// reverse()
// begin()
// end()
// rbegin()
// rend()
// max_element()
// min_element()
// reverse();

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // vector<int> v;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    reverse(v.begin(), v.end());

    for (auto val : v)
        cout << val << " ";

    // // partial sorting
    // int min = *min_element(v.begin() + 2, v.begin() + 6);

    // cout << min << '\n';

    /*
    5
    2 4 15 6 3
    */

    // assending sort
    // sort(v.begin(), v.end());
    // for (auto val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << "\n";
    // desending sort
    // sort(v.rbegin(), v.rend()); // or
    // sort(v.begin(), v.end(), greater<int>());
    // sorting by rance
    // sort(v.begin() +1, v.begin()+3);
    // for (auto val : v)
    //     cout << val << " ";
    // for each loop
    // for(int val:v)
    // for(auto val:v)
    // cout<<val<< " ";

    // vector<int>::iterator it; //or
    // auto it = v.begin(); // must have to initialize

    // // for (it = v.begin(); it != v.end(); it++)
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // v.resize(10, 9); // resize vector
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<< " ";
    // }

    // // example of empty
    // while(! v.empty())
    // {
    //     cout<<v.back()<< '\n';
    //     v.pop_back();
    // }
    // int emp = v.empty();
    // cout << emp << '\n';
    // v.clear();
    // emp = v.empty();
    // cout << emp << '\n';
    // int sz=v.size();
    // cout<<sz<< '\n';
    // v.clear();

    // sz = v.size();
    // cout<<sz<<'\n';

    return 0;
}

/*
5
2 4 15 6 3
*/
