#include <bits/stdc++.h>

using namespace std;

bool isPalindromeChecker(const string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return isPalindromeChecker(str, start + 1, end - 1);
}

bool isPalindrome(const string &str)
{
    return isPalindromeChecker(str, 0, str.length() - 1);
}

int main()
{
    string word;
    cout << "Type any word: ";
    cin >> word;

    if (isPalindrome(word))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}