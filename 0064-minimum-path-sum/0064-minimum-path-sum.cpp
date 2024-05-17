class Solution {
public:
    int sol(int i, int j, vector<vector<int>> &v, vector<vector<int>> &dp) {
        if (i == 0 && j == 0) return v[0][0];
        if (i < 0 || j < 0) return INT_MAX;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        int up = sol(i - 1, j, v, dp);
        int left = sol(i, j - 1, v, dp);
        
        dp[i][j] = v[i][j] + min(up, left);
        
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return sol(n - 1, m - 1, grid, dp);
    }
};
