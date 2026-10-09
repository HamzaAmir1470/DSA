#include <iostream>
#include <vector>

std::vector<int> shuffle(const std::vector<int>& nums, int n) {
    std::vector<int> ans(2 * n);

    for (int i = 0; i < n; i++) {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
    }

    return ans;
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
    std::vector<int> nums1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;
    std::cout << "Test 1 Output: ";
    printVector(shuffle(nums1, n1)); // Expected: [2, 3, 5, 4, 1, 7]

    // Test Case 2
    std::vector<int> nums2 = {1, 2, 3, 4, 4, 3, 2, 1};
    int n2 = 4;
    std::cout << "Test 2 Output: ";
    printVector(shuffle(nums2, n2)); // Expected: [1, 4, 2, 3, 3, 2, 4, 1]

    // Test Case 3
    std::vector<int> nums3 = {1, 1, 2, 2};
    int n3 = 2;
    std::cout << "Test 3 Output: ";
    printVector(shuffle(nums3, n3)); // Expected: [1, 2, 1, 2]

    return 0;
}

// Time Complexity: O(n) - Loops n times to populate both odd and even indices.
// Space Complexity: O(n) - Allocates a result vector of length 2 * n.