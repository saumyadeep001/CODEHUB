class Solution {
public:
    int rev(int a) {
        string s = to_string(a);
        reverse(s.begin(), s.end());
        return stoi(s);
    }

    int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, int> freqMap;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            int diff = nums[i] - rev(nums[i]);
            cnt = (cnt + freqMap[diff]) % MOD;
            freqMap[diff]++;
        }

        return cnt;
    }
};
