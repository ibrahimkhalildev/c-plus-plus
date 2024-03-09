#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "I am eating rich. ";
    string s2 = "I also eating fruits.";
    string s3 = s1 + s2;

    cout << s3 << "\n";

    cout << s2[0];
    cout << s2[1] << s2[2] << s2[3] << "\n";
    cout << s2.size();

    for (int i; i < s1.size(); i++)
    {
        s1[i] = s1[i] + 1;
    }
    cout<<s1<<"\n";
    s2.pop_back();
    cout<<s2<<"\n";
    string svg = "aBcDeFgH";
    svg.erase(svg.begin());
    cout<<svg<<"\n";

    string n;
    cin>>n;
    n.erase(n.begin());
    n.pop_back();
    cout<<n<<"\n";

    return 0;
}
