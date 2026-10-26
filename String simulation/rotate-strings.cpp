#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        string t = s + s;
        return t.find(goal) != string::npos;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "abcde", goal1 = "cdeab";
    string s2 = "abcde", goal2 = "abced";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\", \"" << goal1 << "\") -> " 
         << sol.rotateString(s1, goal1) << endl;
         
    cout << "Test 2 (\"" << s2 << "\", \"" << goal2 << "\") -> " 
         << sol.rotateString(s2, goal2) << endl;

    return 0;
}