#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {5, 4, 1, 3, 2}, n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                // int temp = a[i];
                // a[i] = a[j];
                // a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }  
    return 0;
}

//===================================
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int a = 5;
//     int b = 900;

//     swap(b, a);

//     cout<<"a = "<<a<<" "<<"and b = "<<b<<endl;
//     return 0;
// }
