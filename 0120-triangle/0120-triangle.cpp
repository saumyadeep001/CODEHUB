class Solution {
public:
    int solMem(int i, int j, vector<vector<int>>& v, int n, vector<vector<int>>& dp) {
        if (i == n - 1) return v[i][j];

        if (dp[i][j] != -1) return dp[i][j];

        int down = v[i][j] + solMem(i + 1, j, v, n, dp);
        int right = v[i][j] + solMem(i + 1, j + 1, v, n, dp);

        return dp[i][j] =  min(down, right);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solMem(0, 0, triangle, n, dp);
    }
};