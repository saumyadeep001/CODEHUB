class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<long long> nums(26, 0);
        long long mod = 1000000007;

        for (char& ch : s) {
            nums[ch - 'a']++;
        }

        while (t--) {
            vector<long long> n = nums;
            long long temp = nums[25] % mod;
            nums[0] = 0;

            for (int i = 1; i < 26; i++) {
                nums[i] = n[i - 1] % mod;
            }

            nums[0] = (nums[0] + temp) % mod;
            nums[1] = (nums[1] + temp) % mod;
        }

        long long ans = 0;
        for (long long& num : nums) {
            ans = (ans + num) % mod;
        }

        return ans;
    }
};
