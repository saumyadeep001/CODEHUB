class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; 
        }
        
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            for (char c : s) {
                sum1 += c - '0'; 
            }
        }
        
        int df = abs(sum - sum1); 
        return df;
    }
};
