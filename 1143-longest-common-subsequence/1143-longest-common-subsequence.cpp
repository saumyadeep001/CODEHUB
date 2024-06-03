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

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return sol(n - 1, m - 1, text1, text2, dp);
    }
};
