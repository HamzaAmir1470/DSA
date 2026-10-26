#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                answer[i - 1] = "FizzBuzz";
            } else if (i % 3 == 0) {
                answer[i - 1] = "Fizz";
            } else if (i % 5 == 0) {
                answer[i - 1] = "Buzz";
            } else {
                answer[i - 1] = to_string(i);
            }
        }
        return answer;
    }
};

// Helper function to print the vector nicely
void printVector(const vector<string>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Test cases
    int n1 = 3;
    int n2 = 5;
    int n3 = 15;

    cout << "Test 1 (n = " << n1 << ") -> ";
    printVector(sol.fizzBuzz(n1));

    cout << "Test 2 (n = " << n2 << ") -> ";
    printVector(sol.fizzBuzz(n2));

    cout << "Test 3 (n = " << n3 << ") -> ";
    printVector(sol.fizzBuzz(n3));

    return 0;
}