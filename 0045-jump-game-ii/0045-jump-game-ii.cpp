class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(size(nums), -1); 
        return helper(nums, dp, 0);
    }
    
    int helper(vector<int>& nums, vector<int>& dp, int pos) {
        if (pos >= size(nums) - 1) return 0;  
        if (dp[pos] != -1) return dp[pos];    
        
        int minJumps = 10001; 
        for (int j = 1; j <= nums[pos]; j++) {
            minJumps = min(minJumps, 1 + helper(nums, dp, pos + j));
        }
        
        dp[pos] = minJumps; 
        return dp[pos];
    }
};
