class Solution {
public:
    int solveUsingRecursion(vector<int>& nums, int n) {
        if (n < 0) return 0;
        if (n == 0) return nums[0];

      
        int include = solveUsingRecursion(nums, n - 2) + nums[n];
        int exclude = solveUsingRecursion(nums, n - 1) + 0;

        return max(include, exclude);
    }
    
    
     int topDown(vector<int>& nums, int n,vector<int>& dp) {
        if (n < 0) return 0;
        if (n == 0) return nums[0];
         
         if(dp[n] != -1) return dp[n];

      
        int include = topDown(nums, n - 2,dp) + nums[n];
        int exclude = topDown(nums, n - 1,dp) + 0;

         dp[n] = max(include, exclude);
        return dp[n];
    }

    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        // return solveUsingRecursion(nums, n - 1); 
        
        vector<int> dp(n+1 ,-1);
        return topDown(nums,n,dp);
        
        
    }
};
