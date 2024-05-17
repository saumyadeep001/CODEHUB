class Solution {
public:
//     int solMem(int i, int j, vector<vector<int>> &v, vector<vector<int>> &dp) {
//         if (i == 0 && j == 0) return v[0][0];
//         if (i < 0 || j < 0) return INT_MAX;
        
//         if (dp[i][j] != -1) return dp[i][j];
        
//         int up = solMem(i - 1, j, v, dp);
//         int left = solMem(i, j - 1, v, dp);
        
//         dp[i][j] = v[i][j] + min(up, left);
        
//         return dp[i][j];
//     }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        // return solMem(n - 1, m - 1, grid, dp);
        
           dp[0][0] = grid[0][0]; 
        for (int i = 1; i < n; ++i) dp[i][0] = dp[i - 1][0] + grid[i][0]; 
        for (int j = 1; j < m; ++j) dp[0][j] = dp[0][j - 1] + grid[0][j];
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        } 
        return dp[n - 1][m - 1];
    }
};
