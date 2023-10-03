class Solution {
public:
     int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
         vector<int> l(n);
        vector<int> r(n);
        
        l[0] = nums[0];
        for(int i = 1; i< n; i++) {
            l[i] = nums[i] + l[i-1];
        }
        r[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--) {
            r[i] = nums[i] + r[i+1];
        }
        for(int i = 0; i<n; i++) {
            if(l[i] == r[i])
                return i;
        }
        
        return -1;
    }
};