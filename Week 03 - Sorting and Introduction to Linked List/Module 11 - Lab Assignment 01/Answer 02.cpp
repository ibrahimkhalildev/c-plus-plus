#include <bits/stdc++.h>

using namespace std;

int find_the_Missing_Number(const vector<int>&numbers, int n)
{
    int total_Sum = (n* (n+1))/2;

    int sum_of_Numbers = 0;
    for (int number: numbers)  
    {
        sum_of_Numbers += number;
    }
    
    return total_Sum - sum_of_Numbers;
}

int main()
{
    int n;
    cin >> n;

    vector<int>numbers(n-1);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> numbers[i];
    }

    int the_Missing_Number = find_the_Missing_Number(numbers, n);
    cout<< the_Missing_Number<< endl;

    return 0;
}