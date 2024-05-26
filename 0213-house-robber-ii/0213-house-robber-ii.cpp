class Solution {
public:
    int solrec(int n ,vector<int> &v,vector<int> &dp){
        if(n<0) return 0;
        if(n==0) return v[n];
        if(dp[n] != -1) return dp[n];
        int l = v[n] + solrec(n-2,v,dp);
        int r = solrec(n-1,v,dp);
        
        dp[n]= max(l,r);
        return dp[n];
    }
        int rob(vector<int>& nums) {
         int n = nums.size();
         if(n == 1) return nums[0];
         vector<int> dp(n + 1,-1);
         vector<int> dp1(n + 1,-1);
         vector<int> v1,v2;
            
            for(int i=0;i<n;i++){
                if(i!=0)   v1.push_back(nums[i]);
                if(i!=n-1) v2.push_back(nums[i]);
            }
            int l =solrec(n-2,v1,dp);
            int r =solrec(n-2,v2,dp1);
            
            return max(l,r);
        
    }
};