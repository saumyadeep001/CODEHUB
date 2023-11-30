class Solution {
public:
    
    bool solveRec(int i , vector<int>& nums,int target,vector<vector<int>>& dp){
        int n = nums.size();
        if(i>=n) return 0;
        if(target<0) return 0;
        if(target==0) return 1;
        
        int include = solveRec(i+1,nums,target-nums[i],dp);
        int exclude = solveRec(i+1,nums,target,dp);
        
        return (include or exclude);
        
    }
 
    bool solveMem(int i , vector<int>& nums,int target,vector<vector<int>>& dp){
        int n = nums.size();
        if(i>=n) return 0;
        if(target<0) return 0;
        if(target==0) return 1;
        
        if(dp[i][target]!=-1) return dp[i][target];
        
        int include = solveMem(i+1,nums,target-nums[i],dp);
        int exclude = solveMem(i+1,nums,target,dp);
        
        dp[i][target]= (include or exclude);
        
        return dp[i][target];
        
    }
    
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(int i =0; i<nums.size(); i++){
           sum += nums[i];
        }
        
        if(sum%2!=0) return false;
        int target = sum/2;
        int index =0;
        // int ans = solveRec(index,nums,target);
        // it will show TLE
        
        
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        int ans = solveMem(index,nums,target,dp);

        
        return ans ;
        
        
    }
};