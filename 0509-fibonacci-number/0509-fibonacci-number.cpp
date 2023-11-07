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
    
    
    int bottomUpSol(int n){
      vector<int> dp(n+1,-1);
        dp[0] =0;
        if(n==0) return dp[0];
        dp[1] =1;
        if(n==1) return dp[1];
        
        for(int i =2; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }
    
    int spaceOptSolve(int n){
        
        int prev1 =0;
        int prev2 =1;
        if(n==0) return prev1;
        if(n==1) return prev2;
        int curr;
        for(int i =2; i<=n ; i++){
           curr= prev1 + prev2;
            prev1=prev2;
            prev2 = curr;
        }
     return curr;
    }
    
    
    int fib(int n) {
        // int ans = recSol(n);
        // return ans;
        
        // vector<int> dp(n+1, -1);
        // return topDownSol(n, dp);
        
        // return bottomUpSol(n);
        
        return spaceOptSolve(n);
    }
};