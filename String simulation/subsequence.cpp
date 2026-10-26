#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.length();
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "abc";
    string t1 = "ahbgdc";
    
    string s2 = "axc";
    string t2 = "ahbgdc";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\", \"" << t1 << "\") -> " 
         << sol.isSubsequence(s1, t1) << endl;
         
    cout << "Test 2 (\"" << s2 << "\", \"" << t2 << "\") -> " 
         << sol.isSubsequence(s2, t2) << endl;

    return 0;
}