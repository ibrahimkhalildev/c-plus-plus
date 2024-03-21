#include <bits/stdc++.h>

using namespace std;
namespace one
{
    int x = 50;
    void fun()
    {
        cout << "I am namespace one" << endl;
    }
}
namespace two
{
    double x = 758.2898745;
    void fun3()
    {
        cout << "I am namespace two!" << endl;
    }
}
// using namespace one;
// using namespace two;
int main()
{
    // fun();
    // fun3();
    // two::fun();
    cout<<one::x;
    cout<<two::x;
    return 0;
}
