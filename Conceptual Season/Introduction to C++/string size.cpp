#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "ABCDEasdfeetwqbhg";
    cout << st << " " << st.size() << endl;
    st.resize(7);
    cout <<st<<" "<< st.length() << endl;

    st.clear();
    cout<<st<<" "<< st.size()<<endl;

    if(st.empty())
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
