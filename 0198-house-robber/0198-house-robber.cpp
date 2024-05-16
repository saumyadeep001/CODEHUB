class Solution {
public:
    int solverec(vector<int>& nums,vector<int> &dp, int n) {
        if (n < 0) return 0;
        if (n == 0) return nums.empty() ? 0 : nums[0];
        
        if(dp[n]!=-1) return dp[n];
        
        
        int l = solverec(nums, dp,n - 2) + nums[n];
        int r = solverec(nums, dp,n - 1);
        
        dp[n] =max(l,r);
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return solverec(nums,dp, n - 1);
    }
};


// class Solution {
// public:
//     int solveUsingRecursion(vector<int>& nums, int n) {
//         if (n < 0) return 0;
//         if (n == 0) return nums[0];

      
//         int include = solveUsingRecursion(nums, n - 2) + nums[n];
//         int exclude = solveUsingRecursion(nums, n - 1) + 0;

//         return max(include, exclude);
//     }
    
    
//      int topDown(vector<int>& nums, int n,vector<int>& dp) {
//         if (n < 0) return 0;
//         if (n == 0) return nums[0];
         
//          if(dp[n] != -1) return dp[n];

      
//         int include = topDown(nums, n - 2,dp) + nums[n];
//         int exclude = topDown(nums, n - 1,dp) + 0;

//          dp[n] = max(include, exclude);
//         return dp[n];
//     }
    
    
    
//     int solveUsingTab(vector<int>& nums,int n){
//         vector<int> dp(n+1,0);
//         dp[0]=nums[0];
        
//     for(int i =1 ; i<=n ; i++){
//        int temp =0;
//         if(i-2 >= 0) temp = dp[i-2];
        
//         int include = temp + nums[i];
//         int exclude = dp[i-1] + 0;
        
//         dp[i] = max(include, exclude);
            
//     }
//         return dp[n];  
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size()-1;
//         // return solveUsingRecursion(nums, n - 1); 
        
// //         vector<int> dp(n+1 ,-1);
// //         return topDown(nums,n,dp);
        
//         return solveUsingTab(nums,n);
        
        
//     }
// };
// 