#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        return t.substr(1, t.size() - 2).find(s) != string::npos;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "abab";
    string s2 = "aba";
    string s3 = "abcabcabcabc";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\") -> " << sol.repeatedSubstringPattern(s1) << endl;
    cout << "Test 2 (\"" << s2 << "\") -> " << sol.repeatedSubstringPattern(s2) << endl;
    cout << "Test 3 (\"" << s3 << "\") -> " << sol.repeatedSubstringPattern(s3) << endl;

    return 0;
}