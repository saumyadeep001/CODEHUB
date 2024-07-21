class Solution {
public:
    // Memoization function
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

    // Tabulation function
    int solTab(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int limit = 2;
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(limit + 1, 0)));
        
        for (int i = n - 1; i >= 0; --i) {
            for (int buy = 0; buy <= 1; ++buy) {
                for (int k = 1; k <= limit; ++k) {
                    if (buy) {
                        dp[i][buy][k] = max(-prices[i] + dp[i + 1][0][k], dp[i + 1][1][k]);
                    } else {
                        dp[i][buy][k] = max(prices[i] + dp[i + 1][1][k - 1], dp[i + 1][0][k]);
                    }
                }
            }
        }

        return dp[0][1][2];
    }

    // Wrapper function to choose between memoization and tabulation
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int limit = 2;

        // Memoization
        vector<vector<vector<int>>> dpMem(n, vector<vector<int>>(2, vector<int>(limit + 1, -1)));
        // int memResult = solMem(0, 1, n, prices, limit, dpMem);

        // Tabulation
        int tabResult = solTab(prices);

        return tabResult;
    }
};
