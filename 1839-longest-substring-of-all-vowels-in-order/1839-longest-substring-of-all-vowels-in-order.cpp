class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int longest = 0;
        int currentLength = 0;
        int vowelCount = 0;
        char lastVowel = ' ';

        for (char c : word) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                if (c == lastVowel) {
                    currentLength++;
                } else {
                    if (c > lastVowel) {
                        currentLength++;
                        lastVowel = c;
                        vowelCount++;
                    } else {
                        currentLength = (c == 'a') ? 1 : 0;
                        lastVowel = c;
                        vowelCount = (c == 'a') ? 1 : 0;
                    }
                }
                if (lastVowel == 'u' && vowelCount == 5) {
                    longest = max(longest, currentLength);
                }
            } else {
                currentLength = 0;
                vowelCount = 0;
                lastVowel = ' ';
            }
        }

        return longest;
    }
};
