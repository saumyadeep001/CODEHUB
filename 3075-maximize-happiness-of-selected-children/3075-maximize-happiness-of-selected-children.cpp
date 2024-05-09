class Solution {
public:
    long maximumHappinessSum(std::vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long sum = 0;
       for (int i = 0; i < k; i++) {
            sum += max(happiness[i] - i, 0);
        }
        return sum;
    }
};