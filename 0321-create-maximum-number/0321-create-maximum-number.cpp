class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size(), m = nums2.size();
        vector<int> result;

        auto getMaxSubsequence = [](vector<int>& nums, int len) {
            vector<int> stack;
            int drop = nums.size() - len; 

            for (int num : nums) {
                while (drop > 0 && !stack.empty() && stack.back() < num) {
                    stack.pop_back();
                    drop--;
                }
                stack.push_back(num);
            }
    
            stack.resize(len);
            return stack;
        };

        auto merge = [](vector<int>& nums1, vector<int>& nums2) {
            vector<int> merged;
            while (!nums1.empty() || !nums2.empty()) {
                if (nums1 > nums2) {
                    merged.push_back(nums1.front());
                    nums1.erase(nums1.begin());
                } else {
                    merged.push_back(nums2.front());
                    nums2.erase(nums2.begin());
                }
            }
            return merged;
        };

        for (int i = max(0, k - m); i <= min(k, n); ++i) {
            vector<int> maxSub1 = getMaxSubsequence(nums1, i);
            vector<int> maxSub2 = getMaxSubsequence(nums2, k - i);
            vector<int> merged = merge(maxSub1, maxSub2);
            if (merged > result) {
                result = merged;
            }
        }

        return result;
    }
};
