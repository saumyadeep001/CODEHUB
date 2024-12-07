class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOps) {
        int start = 1, end = *max_element(nums.begin(), nums.end());
        while (start < end) {
            int mid = (start + end) / 2, ops = 0;
            for (int n : nums) ops += (n - 1) / mid;
            if (ops > maxOps) start = mid + 1;
            else end = mid;
        }
        return start;
    }
};
