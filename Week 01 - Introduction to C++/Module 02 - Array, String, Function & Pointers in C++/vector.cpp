#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a;
    vector<float> b;
    vector<char> c;

    for (int i = 0; i < 10; i++)
    {
        // cout<<"Before Push "<<a.size()<<"\n";
        a.push_back(i);
        // cout<<"After Push "<<a.size()<<"\n";
    }
    //cout<<"\n";
    a.insert(a.begin() + 2, 100);
    //cout<<"\n";
    cout <<"Befor Delete:"<< "\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    a.erase(a.begin()+1, a.begin()+3);
    a.pop_back();
    cout<<"\n\nAftr Delete:\n";
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }

    
    return 0;
}
