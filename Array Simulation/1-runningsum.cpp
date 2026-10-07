#include <iostream>
#include <vector>

class Solution {
public:
    // Time Complexity: O(n) - Single pass through the array
    // Space Complexity: O(1) - Modifies input vector in-place
    std::vector<int> runningSum(std::vector<int>& nums) {
        for (size_t i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 4};

    std::vector<int> result = solution.runningSum(nums);

    std::cout << "Running Sum: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}