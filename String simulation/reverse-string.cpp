#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

// Helper function to print the character vector clearly
void printVector(const vector<char>& s) {
    cout << "[";
    for (size_t i = 0; i < s.size(); ++i) {
        cout << "'" << s[i] << "'";
        if (i < s.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    cout << "Test 1 Before: ";
    printVector(s1);
    
    sol.reverseString(s1);
    
    cout << "Test 1 After:  ";
    printVector(s1);

    cout << "------------------------" << endl;

    // Test case 2
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    cout << "Test 2 Before: ";
    printVector(s2);
    
    sol.reverseString(s2);
    
    cout << "Test 2 After:  ";
    printVector(s2);

    return 0;
}