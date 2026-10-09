#include <iostream>
#include <vector>
#include <string>

int finalValueAfterOperations(const std::vector<std::string>& operations) {
    int x = 0;
    for (const std::string& op : operations) {
        if (op[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    return x;
}

int main() {
    // Test cases
    std::vector<std::string> test1 = {"--X", "X++", "X++"};
    std::vector<std::string> test2 = {"++X", "++X", "X++"};
    std::vector<std::string> test3 = {"X++", "++X", "--X", "X--"};

    std::cout << "Test 1 Result: " << finalValueAfterOperations(test1) << " (Expected: 1)\n";
    std::cout << "Test 2 Result: " << finalValueAfterOperations(test2) << " (Expected: 3)\n";
    std::cout << "Test 3 Result: " << finalValueAfterOperations(test3) << " (Expected: 0)\n";

    return 0;
}

// Time Complexity: O(n) - Iterates through all operations once where n is operations.size().
// Space Complexity: O(1) - Modifies an integer counter using O(1) additional memory.
