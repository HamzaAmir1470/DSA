#include <iostream>
#include <vector>
#include <algorithm>

int findMaxConsecutiveOnes(const std::vector<int>& nums) {
    int count = 0;
    int maxCount = 0;

    for (int num : nums) {
        if (num == 1) {
            count++;
            maxCount = std::max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    // Test Case 1
    std::vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    std::cout << "Test 1 Output: " << findMaxConsecutiveOnes(nums1) << " (Expected: 3)\n";

    // Test Case 2
    std::vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    std::cout << "Test 2 Output: " << findMaxConsecutiveOnes(nums2) << " (Expected: 2)\n";

    return 0;
}

// Time Complexity: O(n) - Iterates through all n elements once.
// Space Complexity: O(1) - Modifies integer variables using O(1) memory.