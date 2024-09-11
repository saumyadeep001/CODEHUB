class Solution {
public:
    int maxPower(string s) {
        int maxi = 1;
        int curr = 1;
        char current_char = s[0];
        
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == current_char) {
                curr++;
            } else {
                maxi = max(maxi, curr);
                current_char = s[i];
                curr = 1;
            }
        }
        
        return max(maxi, curr);
    }
};
