#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> indexS(256, 0);
        vector<int> indexT(256, 0);
        for (int i = 0; i < s.length(); ++i) {
            if (indexS[s[i]] != indexT[t[i]]) return false;
            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\", \"" << t1 << "\") -> " 
         << sol.isIsomorphic(s1, t1) << endl;
         
    cout << "Test 2 (\"" << s2 << "\", \"" << t2 << "\") -> " 
         << sol.isIsomorphic(s2, t2) << endl;

    cout << "Test 3 (\"" << s3 << "\", \"" << t3 << "\") -> " 
         << sol.isIsomorphic(s3, t3) << endl;

    return 0;
}