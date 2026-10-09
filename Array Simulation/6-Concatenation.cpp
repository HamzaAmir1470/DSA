#include <iostream>
#include <vector>

std::vector<int> getConcatenation(std::vector<int> nums)
{
    // Append all elements of nums to itself
    nums.insert(nums.end(), nums.begin(), nums.end());
    return nums;
}

void printVector(const std::vector<int> &vec)
{
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << (i + 1 < vec.size() ? ", " : "");
    }
    std::cout << "]\n";
}

int main()
{
    std::vector<int> nums1 = {1, 2, 1};
    std::cout << "Test 1: ";
    printVector(getConcatenation(nums1)); // Output: [1, 2, 1, 1, 2, 1]

    std::vector<int> nums2 = {1, 3, 2, 1};
    std::cout << "Test 2: ";
    printVector(getConcatenation(nums2)); // Output: [1, 3, 2, 1, 1, 3, 2, 1]

    return 0;
}

// Time Complexity: O(n) - Single insertion pass for n items.
// Space Complexity: O(n) - Output vector memory expands to 2n elements.