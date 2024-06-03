// class Solution {
// public:
//     int sol(int n, int target, vector<int> &coins, vector<vector<int>>& dp) {
//         if (n == 0) {
          
//             return (target % coins[0] == 0);
//         }
//         if (dp[n][target] != -1) return dp[n][target];

//         int notTake = sol(n-1, target, coins, dp);
//         int take = 0;
//         if (coins[n] <= target) take = sol(n, target - coins[n], coins, dp);
        
//         dp[n][target] = take + notTake;
//         return dp[n][target];
//     }

//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
//         vector<vector<int>> dp(n, vector<int>(amount+1, 0));
//         //  return sol(n-1, amount, coins, dp);
//         for(int i =1;i<n;i++){
//             for(int j = 0;j<=amount;j++){
//             int nottake = dp[i-1][j];;
//             int take = 0;
//             take = dp[i][j-coins[n]];
//             dp[i][j]=take +nottake;
            
//         }
//     }
//     return dp[n-1][amount];
//     }
// };

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, 0));

        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= amount; j++) {
                int nottake = dp[i-1][j];
                int take = 0;
                if (j >= coins[i-1]) {
                    take = dp[i][j-coins[i-1]];
                }
                dp[i][j] = take + nottake;
            }
        }

        return dp[n][amount];
    }
};