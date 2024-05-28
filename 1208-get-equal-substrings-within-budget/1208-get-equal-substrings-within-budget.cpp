class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0, j = 0, cost = 0, maxLength = 0;

        while (j < s.size()) {
            cost += abs(s[j] - t[j]);
            
            // If the current cost exceeds maxCost, shrink the window from the left
            while (cost > maxCost) {
                cost -= abs(s[i] - t[i]);
                i++;
            }
            
            // Update the maximum length of the substring
            maxLength = max(maxLength, j - i + 1);
            j++;
        }
        
        return maxLength;
    }
};
