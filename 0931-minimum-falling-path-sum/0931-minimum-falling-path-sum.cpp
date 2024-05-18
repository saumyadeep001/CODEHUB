// class Solution {
// public:
//     int solMem(int i, int j, vector<vector<int>>& v, vector<vector<int>>& dp) {
//         int m = v[0].size();
//         if (j < 0 || j >= m) return INT_MAX;
//         if (i == 0) return v[0][j];
        
//         if (dp[i][j] != -1) return dp[i][j];
        
//         int u = solMem(i - 1, j, v, dp);
//         int ul = solMem(i - 1, j - 1, v, dp);
//         int ur = solMem(i - 1, j + 1, v, dp);

//         int minValue = min(u, min(ul, ur));
//         if (minValue == INT_MAX) {
//             return dp[i][j] = v[i][j];
//         } else {
//             return dp[i][j] = v[i][j] + minValue;
//         }
//     }

//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         vector<vector<int>> dp(n, vector<int>(m, -1));
        
//         int mini = INT_MAX;
        
//         for (int j = 0; j < m; ++j) {
//             mini = min(mini, solMem(n - 1, j, matrix, dp));
//         }
        
//         return mini;
//     }
// };

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();

        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j < m; ++j) {
                int down = matrix[i + 1][j];
                int downLeft = (j > 0) ? matrix[i + 1][j - 1] : INT_MAX;
                int downRight = (j < m - 1) ? matrix[i + 1][j + 1] : INT_MAX;

                matrix[i][j] += min(down, min(downLeft, downRight));
            }
        }

    
        int mini = INT_MAX;
        for (int j = 0; j < m; ++j) {
            mini = min(mini, matrix[0][j]);
        }

        return mini;
    }
};