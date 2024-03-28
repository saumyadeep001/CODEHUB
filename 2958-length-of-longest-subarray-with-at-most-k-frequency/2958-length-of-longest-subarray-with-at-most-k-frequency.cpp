class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        unordered_map<int, int> map;

        int result = 0;
        for (; j < n; j++) {
            map[nums[j]]++;
            if (map[nums[j]] > k) {
                for (; i < j && map[nums[j]] > k; i++) {
                    map[nums[i]] == 1 ? map.erase(nums[i]) : map[nums[i]]--;
                }
            }
            result = max(result, j - i + 1);
        }

        return result;
    }
};
