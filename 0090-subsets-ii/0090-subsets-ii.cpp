
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end()); // Sort the input to handle duplicates

        generateSubsets(nums, 0, subset, result);
        
        return result;
    }

private:
    void generateSubsets(const vector<int>& nums, int start, vector<int>& subset, vector<vector<int>>& result) {
        if (subset.size() <= 10) { // Check if subset size is within the constraint
            result.push_back(subset);

            for (int i = start; i < nums.size(); i++) {
                // Skip duplicates
                if (i > start && nums[i] == nums[i - 1]) {
                    continue;
                }

                subset.push_back(nums[i]);
                generateSubsets(nums, i + 1, subset, result);
                subset.pop_back();
            }
        }
    }
};
