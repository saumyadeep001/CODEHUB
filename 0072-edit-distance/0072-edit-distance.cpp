class Solution {
public:
//     int mem(string &str1, string &str2, int i, int j, vector<vector<int>> &dp) {
//         if (i < 0) return j + 1;
//         if (j < 0) return i + 1;
        
//         if (dp[i][j] != -1) return dp[i][j];
        
//         if (str1[i] == str2[j]) {
//             dp[i][j] = mem(str1, str2, i - 1, j - 1, dp);
//         } else {
//             dp[i][j] = 1 + min({mem(str1, str2, i - 1, j, dp), // Delete
//                                 mem(str1, str2, i, j - 1, dp), // Insert
//                                 mem(str1, str2, i - 1, j - 1, dp)}); // Replace
//         }
//         return dp[i][j];
//     }
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        for (int i = 0; i <= n; i++) dp[i][0] = i;
        for (int j = 0; j <= m; j++) dp[0][j] = j;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
                }
            }
        }
        
        return dp[n][m];
    }
};

        

