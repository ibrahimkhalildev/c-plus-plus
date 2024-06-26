#include <bits/stdc++.h>

using namespace std;

vector<int> even_generator(const vector<int>&input)
{
    vector<int> even_Nums;
    for (int num : input)
    {
        if(num % 2 == 0)
        {
            even_Nums.push_back(num);
        }
    }
    return even_Nums;
}
int main()
{
    vector<int> numbers = {9, 4, 5, 2, 6};
    vector<int> even_Nums = even_generator(numbers);

    cout << "Even Numbers: ";
    for (int num : even_Nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
