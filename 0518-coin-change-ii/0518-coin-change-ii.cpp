class Solution {
public:
    int sol(int n, int target, vector<int> &coins, vector<vector<int>>& dp) {
        if (n == 0) {
            return (target % coins[0] == 0);
        }
        if (dp[n][target] != -1) return dp[n][target];

        int notTake = sol(n-1, target, coins, dp);
        int take = 0;
        if (coins[n] <= target) take = sol(n, target - coins[n], coins, dp);
        
        dp[n][target] = take + notTake;
        return dp[n][target];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        return sol(n-1, amount, coins, dp);
    }
};
