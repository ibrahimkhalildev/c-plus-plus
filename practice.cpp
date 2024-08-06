#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to check and update the count of "abc" substrings
void updateABCCount(set<int>& abcPositions, string& s, int index, int& count) {
    // Check substrings affected by changing s[index]
    for (int i = max(0, index - 2); i <= min((int)s.size() - 3, index); ++i) {
        if (s.substr(i, 3) == "abc") {
            if (abcPositions.count(i)) {
                abcPositions.erase(i);
                --count;
            }
        }
    }

    // Perform the character change
    if (s[index] != ' ') { // placeholder to indicate changes
        s[index] = ' ';
    }

    for (int i = max(0, index - 2); i <= min((int)s.size() - 3, index); ++i) {
        if (s.substr(i, 3) == "abc") {
            if (!abcPositions.count(i)) {
                abcPositions.insert(i);
                ++count;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    // Track positions of "abc" substrings
    set<int> abcPositions;
    int count = 0;
    for (int i = 0; i <= n - 3; ++i) {
        if (s.substr(i, 3) == "abc") {
            abcPositions.insert(i);
            ++count;
        }
    }

    // Process each query
    while (q--) {
        int pos;
        char c;
        cin >> pos >> c;
        --pos; // Convert to 0-based index

        // Check and update the count of "abc" substrings
        updateABCCount(abcPositions, s, pos, count);

        // Apply the character update
        s[pos] = c;

        // Check and update the count of "abc" substrings again
        updateABCCount(abcPositions, s, pos, count);

        // Output the result for this query
        cout << count << endl;
    }

    return 0;
}
