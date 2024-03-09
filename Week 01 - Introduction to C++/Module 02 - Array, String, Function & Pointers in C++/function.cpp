#include <bits/stdc++.h>
using namespace std;

// string erage_first_n_last(string v)
// {
//     v.erase(v.begin());
//     v.pop_back();

//     return v;
// }
void erage_first_n_last2(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"In Function = "<<s<<"\n";
}

int main()
{
    string s;
    cin >> s;
    //string ans = erage_first_n_last(s);
    erage_first_n_last2(s);

    cout<<s<<"\n";
    //cout<<ans<<"\n";

    return 0;
}
