class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i = 0;
        for (auto ele : nums) {
            if (i < 2 || nums[i - 2] != ele) {
                nums[i++] = ele;
            }
        }
        return i;
    }
};