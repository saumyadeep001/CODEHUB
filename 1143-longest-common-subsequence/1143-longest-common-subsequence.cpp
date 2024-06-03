class Solution {
public:
    int sol(int i, int j, string &str1, string &str2, vector<vector<int>> &dp) {
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        if (str1[i] == str2[j]) {
            dp[i][j] = 1 + sol(i - 1, j - 1, str1, str2, dp);
        } else {
            dp[i][j] = max(sol(i - 1, j, str1, str2, dp), sol(i, j - 1, str1, str2, dp));
        }

        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

        // return sol(n - 1, m - 1, text1, text2, dp);

        for(int i = 0; i <= n; i++) dp[i][0] = 0;
        for(int j = 0; j <= m; j++) dp[0][j] = 0;
  
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return dp[n][m];
    }
};