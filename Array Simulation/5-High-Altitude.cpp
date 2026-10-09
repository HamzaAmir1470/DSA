#include <iostream>
#include <vector>
#include <algorithm>

int largestAltitude(const std::vector<int>& gain) {
    int currentAlt = 0;
    int maxAlt = 0;

    for (int g : gain) {
        currentAlt += g;
        maxAlt = std::max(currentAlt, maxAlt);
    }

    return maxAlt;
}

int main() {
    // Test Case 1
    std::vector<int> gain1 = {-5, 1, 5, 0, -7};
    std::cout << "Test 1 Result: " << largestAltitude(gain1) << " (Expected: 1)\n";

    // Test Case 2
    std::vector<int> gain2 = {-4, -3, -2, -1, 4, 3, 2};
    std::cout << "Test 2 Result: " << largestAltitude(gain2) << " (Expected: 0)\n";

    return 0;
}

// Time Complexity: O(n) - Single pass through the gain array of length n.
// Space Complexity: O(1) - Uses a constant amount of extra space (currentAlt and maxAlt variables).