class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int maxi = nums[i], mini = nums[i];

            for (int j = i; j < nums.size(); j++) {
                maxi = max(maxi, nums[j]);
                mini = min(mini, nums[j]);
                ans += (maxi - mini);
            }
        }

        return ans;
    }
};
