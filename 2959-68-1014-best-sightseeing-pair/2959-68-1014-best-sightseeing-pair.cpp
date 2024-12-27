class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = values[0] + 0;
        int maxScore = 0;
        
        for (int j = 1; j < values.size(); ++j) {
            maxScore = max(maxScore, maxi + values[j] - j);
            maxi = max(maxi, values[j] + j);
        }
        
        return maxScore;
    }
};