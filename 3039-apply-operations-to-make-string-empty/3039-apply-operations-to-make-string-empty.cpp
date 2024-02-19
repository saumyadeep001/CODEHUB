class Solution {
public:
    string lastNonEmptyString(string s) {
        
        vector freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        int maxFreq = 0;
        for (int i : freq) {
            maxFreq = std::max(i, maxFreq);
        }

        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            char ch = s[i];
            if (freq[ch - 'a'] == maxFreq) {
                freq[ch - 'a'] = -1;
                ans = ch + ans;
            }
        }

        return ans;
    }
};
      