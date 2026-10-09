#include <iostream>
#include <vector>

int numIdenticalPairs(const std::vector<int>& nums) {
    int count = 0;
    int freq[101] = {0}; // Zero-initialized frequency array

    for (int num : nums) {
        count += freq[num];
        freq[num]++;
    }

    return count;
}

int main() {
    // Test Case 1
    std::vector<int> nums1 = {1, 2, 3, 1, 1, 3};
    std::cout << "Test 1 Result: " << numIdenticalPairs(nums1) << " (Expected: 4)\n";

    // Test Case 2
    std::vector<int> nums2 = {1, 1, 1, 1};
    std::cout << "Test 2 Result: " << numIdenticalPairs(nums2) << " (Expected: 6)\n";

    // Test Case 3
    std::vector<int> nums3 = {1, 2, 3};
    std::cout << "Test 3 Result: " << numIdenticalPairs(nums3) << " (Expected: 0)\n";

    return 0;
}

// Time Complexity: O(n) - Single linear iteration through the vector.
// Space Complexity: O(1) - Uses a small fixed-size hash map / array of size 101.