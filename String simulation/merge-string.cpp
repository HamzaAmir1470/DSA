#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;

        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) result += word1[i++];
            if (j < word2.size()) result += word2[j++];
        }

        return result;
    }
};

int main() {
    Solution sol;

    // Test cases
    string word1_1 = "abc", word2_1 = "pqr";
    string word1_2 = "ab", word2_2 = "pqrs";
    string word1_3 = "abcd", word2_3 = "pq";

    cout << "Test 1 (\"" << word1_1 << "\", \"" << word2_1 << "\") -> \"" 
         << sol.mergeAlternately(word1_1, word2_1) << "\"" << endl;
         
    cout << "Test 2 (\"" << word1_2 << "\", \"" << word2_2 << "\") -> \"" 
         << sol.mergeAlternately(word1_2, word2_2) << "\"" << endl;

    cout << "Test 3 (\"" << word1_3 << "\", \"" << word2_3 << "\") -> \"" 
         << sol.mergeAlternately(word1_3, word2_3) << "\"" << endl;

    return 0;
}