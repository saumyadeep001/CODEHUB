class Solution {
public:
    vector<int> minBitwiseArray(std::vector<int>& nums) {
        vector<int> ans;
        for (int x : nums) {
            if (x == 2) {
                ans.push_back(-1);
            } else {
                int lowest_one_bit = (x + 1) & -(x + 1);
                x -= (lowest_one_bit >> 1);
                ans.push_back(x);
            }
        }
        return ans;
    }
};
