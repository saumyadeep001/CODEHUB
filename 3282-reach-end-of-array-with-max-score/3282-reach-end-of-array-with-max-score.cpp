class Solution {
public:
    long long findMaximumScore(std::vector<int>& nums) {
        long long max = 0, sum = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            max = std::max(max, (long long)nums[i]);
            sum += max;
        }
        return sum;
    }
};