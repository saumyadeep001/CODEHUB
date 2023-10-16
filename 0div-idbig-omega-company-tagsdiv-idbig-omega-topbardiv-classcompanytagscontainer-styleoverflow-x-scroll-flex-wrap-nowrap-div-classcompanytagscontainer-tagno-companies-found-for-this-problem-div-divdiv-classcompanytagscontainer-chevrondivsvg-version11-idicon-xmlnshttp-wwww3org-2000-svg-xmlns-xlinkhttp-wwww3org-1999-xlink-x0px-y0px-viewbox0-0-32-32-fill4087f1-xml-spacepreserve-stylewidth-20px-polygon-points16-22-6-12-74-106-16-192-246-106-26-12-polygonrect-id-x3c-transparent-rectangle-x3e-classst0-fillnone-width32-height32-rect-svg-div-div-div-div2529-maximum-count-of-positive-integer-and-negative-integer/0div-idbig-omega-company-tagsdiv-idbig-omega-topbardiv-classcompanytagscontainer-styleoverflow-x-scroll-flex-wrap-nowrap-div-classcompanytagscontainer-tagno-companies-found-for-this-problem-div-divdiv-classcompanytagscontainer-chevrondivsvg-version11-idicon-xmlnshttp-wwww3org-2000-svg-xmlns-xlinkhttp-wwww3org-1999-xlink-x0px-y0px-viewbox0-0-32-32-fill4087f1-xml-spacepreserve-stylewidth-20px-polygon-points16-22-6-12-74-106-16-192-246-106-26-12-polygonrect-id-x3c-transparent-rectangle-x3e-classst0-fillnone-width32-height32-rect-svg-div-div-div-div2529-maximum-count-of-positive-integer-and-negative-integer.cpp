class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int pnt =0,cnt=0;
        while(i<n){
  if (nums[i]>0) pnt++;
            else if(nums[i]<0)cnt++;
            
            i++;
        }
        
        if (pnt>=cnt)  return pnt;
        else return cnt;
    }
};

