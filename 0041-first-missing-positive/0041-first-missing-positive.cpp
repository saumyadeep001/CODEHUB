class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int start= 1;
        bool flag= false;
        
        for(int i=0; i<nums.size(); i++){
            
            if(i>0 and nums[i]==nums[i-1]) continue;
            if(flag == true and nums[i] != start) return start;
            if(nums[i] == start) {
                flag= true;
                start++;
            }
        }
        
        if(flag == true) return start;
        return 1;
    }
};