class Solution {
public:
    int solMem(int i, int buy, int n, vector<int>& prices, int limit, vector<vector<vector<int>>>& dp) {
        if (i == n || limit == 0) return 0;
        if (dp[i][buy][limit] != -1) return dp[i][buy][limit];
        
        int profit = 0;
        if (buy) {
            profit = max(-prices[i] + solMem(i + 1, 0, n, prices, limit, dp), solMem(i + 1, 1, n, prices, limit, dp));
        } else {
            profit = max(prices[i] + solMem(i + 1, 1, n, prices, limit - 1, dp), solMem(i + 1, 0, n, prices, limit, dp));
        }
        
        return dp[i][buy][limit] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int limit = 2; 
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(limit + 1, -1)));
        return solMem(0, 1, n, prices, limit, dp);
    }
};
