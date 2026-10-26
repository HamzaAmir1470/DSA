#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move left pointer until a vowel is found
            while (left < right && vowels.find(s[left]) == vowels.end())
                left++;

            // Move right pointer until a vowel is found
            while (left < right && vowels.find(s[right]) == vowels.end())
                right--;

            // Swap vowels
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "IceCreAm";
    string s2 = "leetcode";

    cout << "Test 1 (\"" << s1 << "\") -> \"" << sol.reverseVowels(s1) << "\"" << endl;
    cout << "Test 2 (\"" << s2 << "\") -> \"" << sol.reverseVowels(s2) << "\"" << endl;

    return 0;
}