// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    bool x = true;
    bool y = true;

    if (x && y)
    {
        cout << "True\n";
        if (x)
        {
            cout<<"I am nested if!\n";
        }
        else
        {
            cout<<"I am nested else!\n";
        }
    }
    else
    {
        cout << "False\n";
    }

    int q= 10;
    int t = 5;
    if (t == 10)
    {
        cout<<"if else block!";
    }
    else if (t < q)
    {
        cout<<"if else block 2!\n\n";
    }
    else
    {
        cout<<"Try again!\n";
    }

    int day = 3;
    switch (day)
    {
    case 2:
        cout<<"Day 2!";
        break;
    case 3:
        cout<< "Day 3!\n";
        break;
    default:
        cout<<"All Done!\n";
        break;
    }

    return 0;
}
