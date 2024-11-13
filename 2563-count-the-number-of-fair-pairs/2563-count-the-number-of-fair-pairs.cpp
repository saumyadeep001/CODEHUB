#include <vector>
#include <algorithm>

class Solution {
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long cnt = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int left_bound = lower - nums[i];
            int right_bound = upper - nums[i];

            auto l = lower_bound(nums.begin() + i + 1, nums.end(), left_bound);
            auto r = upper_bound(nums.begin() + i + 1, nums.end(), right_bound);

            cnt += r - l;
        }

        return cnt;
    }
};
