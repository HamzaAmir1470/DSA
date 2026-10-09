#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Normalize k

    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

// Helper function to display vectors
void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i + 1 < vec.size() ? ", " : "");
    }
    std::cout << "]\n";
}

int main() {
    // Test Case 1
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    rotate(nums1, k1);
    std::cout << "Test 1 Output: ";
    printVector(nums1); // Expected: [5, 6, 7, 1, 2, 3, 4]

    // Test Case 2
    std::vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    rotate(nums2, k2);
    std::cout << "Test 2 Output: ";
    printVector(nums2); // Expected: [3, 99, -1, -100]

    return 0;
}

// Time Complexity: O(n) - Modifies all n elements twice across the reverse calls.
// Space Complexity: O(1) - Uses a constant amount of auxiliary memory.