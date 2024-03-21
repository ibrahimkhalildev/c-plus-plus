#include <bits/stdc++.h>
using namespace std;

int main()
{



    string str(100, 'C');

    // string copy;
    string a = "AbcdE ";
    string b = "AbcdE ";
    //a = b;
    string c = a+b;

    if(a == b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    a+=b;

    cout << str.capacity() << endl;
    cout << str.max_size() << endl;

    cout << str << endl;

    cout << a << endl;
    return 0;
}
