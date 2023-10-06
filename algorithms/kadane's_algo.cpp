#include <iostream>
#include <vector>

int kadaneAlgorithm(std::vector<int>& nums) {
    int maxSum = nums[0];
    int currentMax = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentMax = std::max(nums[i], currentMax + nums[i]);
        maxSum = std::max(maxSum, currentMax);
    }

    return maxSum;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSubarraySum = kadaneAlgorithm(nums);
    std::cout << "Maximum Subarray Sum: " << maxSubarraySum << std::endl;

    return 0;
}
