class Solution {
public:
    string mergeAlternately(string word1, string word2) {
           string ans; // Corrected: Use string instead of array of strings
        int maxLength = max(word1.length(), word2.length());
        
        for (int i = 0; i < maxLength; i++) {
            if (i < word1.length()) {
                ans += word1[i]; // Concatenate characters to the ans string
            }
            if (i < word2.length()) {
                ans += word2[i]; // Concatenate characters to the ans string
            }
        }
        
        return ans; // Corrected: Return string instead of array of strings;
    }
};