class Solution {
public:
    int sol(int n, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (n == 0) {
            if (target == 0 && nums[0] == target) return 2;
            if (target == 0 || nums[0] == target) return 1;
            else return 0;
        }
        if (target < 0 || target >= dp[0].size()) return 0;
        if (dp[n][target] != -1) return dp[n][target];
        
        int notTake = sol(n-1, target, nums, dp);
        int take = 0;
        if (target >= nums[n]) take = sol(n-1, target - nums[n], nums, dp);
        
        return dp[n][target] = take + notTake;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++) total += nums[i];
        if (total - target < 0 || (total - target) % 2 != 0) return 0;

        int subsetSum = (total - target) / 2;
        vector<vector<int>> dp(n, vector<int>(subsetSum + 1, -1));
        return sol(n-1, subsetSum, nums, dp);
    }
};
