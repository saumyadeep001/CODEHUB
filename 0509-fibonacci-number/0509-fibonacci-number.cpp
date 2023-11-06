class Solution {
public:
    
    int recSol(int n){
     if(n==1 or n==0) return n;
        return recSol(n-1) + recSol(n-2);
}
    
    
    int topDownSol(int n ,vector<int>& dp){
         if(n==1 or n==0) return n;
        
        if(dp[n] != -1) return dp[n];
        
        dp[n] =topDownSol(n-1,dp) + topDownSol(n-2,dp);
         return dp[n];
    }
    
    
    int fib(int n) {
        // int ans = recSol(n);
        // return ans;
        
        vector<int> dp(n+1, -1);
        return topDownSol(n, dp);
    }
};