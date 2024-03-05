#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    // for loop
    for (i = 1; i <= 10; i++)
    {
        //cout << i << " Night"<< endl;
        if (i == 3)
            continue;
            cout<< i<< " Night" <<endl;
    }
    cout << "\n";

    // while loop
    int b = 1;
    while (b <= 10)
    {
        cout << b << " "
             << "Allah\n";
        b++;
    }
    cout << "\n";

    // do while loop
    int t = 1, j;
    do
    {
        cout << t << " ";
        if (t == 6)
        {
            break;
        }

    } while (t++);

    return 0;
}
