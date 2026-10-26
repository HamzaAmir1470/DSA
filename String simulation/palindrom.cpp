#include <iostream>
#include <string>
#include <cctype> // Required for isalnum and tolower

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            // Compare characters in lowercase
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = " ";

    // Print true/false instead of 1/0
    cout << boolalpha; 
    
    cout << "Test 1 (\"" << s1 << "\") -> " << sol.isPalindrome(s1) << endl;
    cout << "Test 2 (\"" << s2 << "\") -> " << sol.isPalindrome(s2) << endl;
    cout << "Test 3 (\"" << s3 << "\") -> " << sol.isPalindrome(s3) << endl;

    return 0;
}