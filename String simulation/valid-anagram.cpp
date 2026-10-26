#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int c : count) {
            if (c != 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "anagram";
    string t1 = "nagaram";
    
    string s2 = "rat";
    string t2 = "car";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\", \"" << t1 << "\") -> " 
         << sol.isAnagram(s1, t1) << endl;
         
    cout << "Test 2 (\"" << s2 << "\", \"" << t2 << "\") -> " 
         << sol.isAnagram(s2, t2) << endl;

    return 0;
}