class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefix(n, 1); 
        for (int i = 0; i < n - 1; i++) {
            prefix[i + 1] = prefix[i] + ((nums[i] % 2) != (nums[i + 1] % 2));
        }

        vector<bool> ans;
        for (const auto& q : queries) {
            int l = q[0], r = q[1];
            ans.push_back((prefix[r] - prefix[l]) == (r - l));
        }
        return ans;
    }
};
