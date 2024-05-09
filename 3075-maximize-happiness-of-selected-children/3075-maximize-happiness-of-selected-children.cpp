class Solution {
public:
    long maximumHappinessSum(std::vector<int>& happiness, int k) {
        int n = happiness.size();
        vector<int> happinessList(happiness.begin(), happiness.end());
        sort(happinessList.begin(), happinessList.end(), greater<int>());
        long sum = 0;

        for (int i = 0; i < k; i++) {
            sum += max(happinessList[i] - i, 0);
        }

        return sum;
    }
};