#include <bits/stdc++.h>

using namespace std;

int main()
{
    // syntex of c++
    int *ptr = new int[10]{0};
    for (int i = 0; i < 10; i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete ptr;

    //syntex of c language
    // // int *p = (int *)malloc(10 * sizeof(int));
    // int *p = (int *)calloc(10, sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << p[i] << endl;
    // }
    // free(p);
    return 0;
}
