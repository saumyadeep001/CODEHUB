class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans ;
        int l =0, r=0;
        for(int i =0; i<nums.size(); i++) r+=nums[i];
        for(int i =0; i< nums.size();i++){
            r -= nums[i];
            ans.push_back(abs(l-r));
            l += nums[i];
        }
      return ans;  
    }
};


