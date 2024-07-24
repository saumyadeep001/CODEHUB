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

    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        vector<vector<vector<int>>> dpMem(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        int memResult = solMem(0, 1, n, prices, k, dpMem);

        return memResult;
    }
};
