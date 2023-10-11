class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums[0],m= 0;
        for(int i = 1; i< nums.size(); i++){
          m= (max(m,nums[i]-n));
        n= min(n,nums[i]);
        }
        return m==0? -1:m;
    }
};

