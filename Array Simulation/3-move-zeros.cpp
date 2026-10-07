#include <iostream>
#include <vector>
#include <utility>

class Solution {
public:
    // Time Complexity: O(n) - Single pass with in-place swaps
    // Space Complexity: O(1) - Zero additional memory allocated
    void moveZeroes(std::vector<int>& nums) {
        int lastNonZeroFoundAt = 0;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                std::swap(nums[lastNonZeroFoundAt], nums[i]);
                lastNonZeroFoundAt++;
            }
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {0, 1, 0, 3, 12};

    solution.moveZeroes(nums);

    std::cout << "Moved Zeroes: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}