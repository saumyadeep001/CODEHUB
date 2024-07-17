class Solution {
public:
    int solMem(int i, int buy, int n, vector<int> &prices, vector<vector<int>> &dp) {
        if (i == n) return 0;
        if (dp[i][buy] != -1) return dp[i][buy];

        int profit = 0;
        if (buy) {
            profit = max(-prices[i] + solMem(i+1, 0, n, prices, dp), solMem(i+1, 1, n, prices, dp));
        } else {
            profit = max(prices[i] + solMem(i+1, 1, n, prices, dp), solMem(i+1, 0, n, prices, dp));
        }

        return dp[i][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        for (int i = n - 1; i >= 0; i--) {
            for (int buy = 0; buy < 2; buy++) {
                int profit = 0;
                if (buy) {
                    profit = max(-prices[i] + dp[i + 1][0], dp[i + 1][1]);
                } else {
                    profit = max(prices[i] + dp[i + 1][1], dp[i + 1][0]);
                }
                dp[i][buy] = profit;
            }
        }

        return dp[0][1];
    }
};
