#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    // Time Complexity: O(n) - Two pointers process each element once
    // Space Complexity: O(1) auxiliary - Excluding the return vector O(n)
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n);
        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; --i) {
            if (std::abs(nums[left]) > std::abs(nums[right])) {
                result[i] = nums[left] * nums[left];
                left++;
            } else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {-4, -1, 0, 3, 10};

    std::vector<int> result = solution.sortedSquares(nums);

    std::cout << "Sorted Squares: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}