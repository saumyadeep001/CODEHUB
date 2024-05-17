class Solution {
public:
    int recsol(int i, int j, vector<vector<int>>& v, vector<vector<int>>& dp) {
        if (i < 0 || j < 0 || v[i][j] == 1) return 0;  
        if (i == 0 && j == 0) return 1;    
        if (dp[i][j] != -1) return dp[i][j];
        
        int up = recsol(i - 1, j, v, dp);
        int left = recsol(i, j - 1, v, dp);
        return dp[i][j] = up + left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return recsol(n - 1, m - 1, obstacleGrid, dp);
    } 
};
