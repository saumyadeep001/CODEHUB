 class Solution {
 public:
     typedef pair<long long, long long> mc;
    long long kSum(vector<int> &nums, int k)
    {
        int n = nums.size();
        priority_queue<mc> p; 
        long long maxsum = 0;
        for (auto &r : nums)
            (r >= 0) ? maxsum += r: r *= -1;

        sort(nums.begin(), nums.end());
        p.push({maxsum - nums[0], 0});
        vector<long long> ans;
        ans.push_back(maxsum);

        while (ans.size() < k)
        {
            auto [c, i] = p.top();
            p.pop();
            ans.push_back(c);
            if (i + 1 < n)
            {
                p.push({c - nums[i + 1], i + 1});
                p.push({c- nums[i + 1] + nums[i], i + 1});
            }
        }
        return ans[k - 1];
    }
};