class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    unordered_map<int, int> frequency;
    vector<int> sneakyNumbers;

    for (int num : nums) {
        frequency[num]++;
    }

    for (const auto& pair : frequency) {
        if (pair.second > 1) {
            sneakyNumbers.push_back(pair.first);
            if (sneakyNumbers.size() == 2) {
                break;
            }
        }
    }

    return sneakyNumbers;
  }
};