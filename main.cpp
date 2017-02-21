#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    int res;
    std::vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    res = s.maxSubArray(v);
    std::cout << res << std::endl;
    return 0;
}