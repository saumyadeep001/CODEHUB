class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3) return -1;
        return nums[0] + nums[1] + nums[2] - max({nums[0], nums[1], nums[2]}) - min({nums[0], nums[1], nums[2]});
    }
};