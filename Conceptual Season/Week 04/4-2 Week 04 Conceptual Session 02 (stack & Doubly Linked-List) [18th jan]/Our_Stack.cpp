#include <bits/stdc++.h>
#include "my_stack.h"

using namespace std;

int main()
{
    Stack numset;

    numset.PUSH(12);
    numset.PUSH(10);
    numset.PUSH(60);
    numset.PUSH(77);
    numset.PUSH(88);
    numset.PUSH(98);
    numset.PUSH(28);
    numset.PUSH(13);
    // cout << numset.EMPTY() << '\n';

    cout << "Stack Size: " << numset.SIZE() << '\n';


    while (numset.EMPTY() == false)
    {
        cout << numset.TOP() << " ";
        numset.POP();
    }
    cout << endl;
    cout << "Stack Size: " << numset.SIZE() << '\n';
    cout << endl;

    return 0;
}
