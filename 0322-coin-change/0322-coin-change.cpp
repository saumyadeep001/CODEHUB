class Solution {
public: 
    int memSol(int n, vector<int> &coins, int amount, vector<vector<int>> &dp) {
        if (n == 0) {
            if (amount % coins[0] == 0) return amount / coins[0];
            return 1e9;
        }
        if (dp[n][amount] != -1) return dp[n][amount];
        int notTake = memSol(n - 1, coins, amount, dp);
        int take = 1e9;
        if (coins[n] <= amount) take = 1 + memSol(n, coins, amount - coins[n], dp);
        return dp[n][amount] = min(take, notTake);
    }

 int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 1e9));
     // int ans = memSol(n - 1, coins, amount, dp);
        // return ans >= 1e9 ? -1 : ans;
        
        for (int j = 0; j <= amount; ++j) {
            if (j % coins[0] == 0) dp[0][j] = j / coins[0];
        }

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j <= amount; ++j) {
                int notTake = dp[i - 1][j];
                int take = INT_MAX;
                if (coins[i] <= j) take = 1 + dp[i][j - coins[i]];
                dp[i][j] = min(take, notTake);
            }
        }
        
        int ans = dp[n - 1][amount];
        return ans >= 1e9 ? -1 : ans;
    }
};

// class Solution {
// public:
    
//     // solve function se tle ayee ga
    
//     int solve(vector<int>& coins, int amount){
        
//         if(amount == 0) return 0;
        
//         if(amount < 0) return INT_MAX;
        
//         int mini = INT_MAX;
//         for(int i =0; i<coins.size(); i++){
//             int ans = solve(coins, amount - coins[i]);
//             if(ans != INT_MAX){
//               mini = min(mini, 1+ans);
//             }
            
//         }
//         return mini;
//     }
    
    
//     // to avoid TLE we are using Dp
//     //TOP-DOWN APPROACH
    
//     int solveDp(vector<int>& coins,int amount,vector<int>&  dp){
        
//         if(amount == 0) return 0;
//         if(amount < 0) return INT_MAX;
        
//         if(dp[amount] != -1) return dp[amount] ;
        
//         int mini = INT_MAX;
//         for(int i =0; i<coins.size(); i++){
//            int ans = solveDp(coins, amount- coins[i], dp );
//             if(ans != INT_MAX){
//              mini = min(mini, 1+ans);
//             }
//         }
//         dp[amount] = mini;
//         return mini ;

//     }
    
// //     int solveDp(vector<int>& coins,int amount,vector<int> &dp){
// //         if(int i==0)
// //     }
    
//     //to avoid TLE we are using Dp 
//     //BOTTOM-UP APPROACH
    
//      int solveDpBU(vector<int>& coins,int amount){
        
//         vector<int> dp(amount+1,INT_MAX);
//          dp[0]=0;
         
//          for(int i=1; i<=amount; i++){
//          for(int j =0; j<coins.size(); j++){
//           if(i-coins[j]>=0 and dp[i-coins[j]] != INT_MAX){
//               int ans = dp[i-coins[j]];
//               dp[i]=min(dp[i], 1+ans);
//                }
//             }
//          }
//     return dp[amount];

//     }
    
    
//     int coinChange(vector<int>& coins, int amount) {
        
//         // int ans = solve(coins, amount);
//         // if(ans == INT_MAX)  return -1;
//         // else return ans;
        
        
//         // vector<int> dp(amount+1,-1);
//         // int ans = solveDp(coins, amount, dp );
//         // if(ans == INT_MAX)  return -1;
//         // else return ans;
        
//         int ans = solveDpBU(coins,amount);
//         if(ans == INT_MAX) return -1;
//         else return ans;
//     }
// };