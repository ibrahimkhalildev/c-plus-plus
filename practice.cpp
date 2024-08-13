#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    map<string, int> wordCount;
    string word;

    // Prompt the user for input
    cout << "Enter the text: ";
    getline(cin, input);  // Read the entire line of input

    // Use istringstream to process the input text
    istringstream iss(input);

    // Count the occurrences of each word
    while (iss >> word) {
        ++wordCount[word];
    }

    // Find the maximum occurring word
    string maxWord;
    int maxCount = 0;

    for (const auto& pair : wordCount) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < maxWord)) {
            maxWord = pair.first;
            maxCount = pair.second;
        }
    }

    // Print the result
    cout << "Maximum occurring word is \"" << maxWord << "\". Occurring " << maxCount << " times." << endl;

    return 0;
}
