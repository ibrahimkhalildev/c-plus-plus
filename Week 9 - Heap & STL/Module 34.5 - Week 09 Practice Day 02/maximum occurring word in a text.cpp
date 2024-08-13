#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    map<string, int> word_Count;
    string word;

    cout << "Enter Text: ";
    getline(cin, input);

    istringstream iss(input);

    while (iss >> word)
    {
        ++word_Count[word];
    }

    string max_Word;
    int Max_Count = 0;

    for (const auto &pair : word_Count)
    {
        if (pair.second > Max_Count || (pair.second == Max_Count && pair.first < max_Word))
        {
            max_Word = pair.first;
            Max_Count = pair.second;
        }
    }

    cout << "Maximum occurring word is \"" << max_Word << "\". Ocurring " << Max_Count << " times." << '\n';

    return 0;
}