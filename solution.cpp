//
// Created by 王青龙 on 21/02/2017.
//

#include "solution.h"

int Solution::maxSubArray(std::vector<int> &nums) {
    std::vector<int> f(nums.size(), 0);
    f[0] = nums[0];
    int maxSum = f[0];
    for (int i = 1; i < nums.size(); ++i) {
        f[i] = f[i - 1] > 0 ? f[i - 1] + nums[i] : 0 + nums[i];
        maxSum = std::max(maxSum, f[i]);
    }
    return maxSum;
}
