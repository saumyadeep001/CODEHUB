class Solution {
public:
    int mem(string &str1, string &str2, int i, int j, vector<vector<int>> &dp) {
        if (i < 0) return j + 1;
        if (j < 0) return i + 1;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        if(str1[i] == str2[j])  dp[i][j] = mem(str1, str2, i - 1, j - 1, dp);
        else dp[i][j] = 1 + min({mem(str1, str2, i - 1, j, dp),mem(str1, str2, i, j - 1, dp),mem(str1, str2, i - 1, j - 1, dp)}); 
        
        return dp[i][j];
    }
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return mem(word1, word2, n - 1, m - 1, dp);
    }
};
