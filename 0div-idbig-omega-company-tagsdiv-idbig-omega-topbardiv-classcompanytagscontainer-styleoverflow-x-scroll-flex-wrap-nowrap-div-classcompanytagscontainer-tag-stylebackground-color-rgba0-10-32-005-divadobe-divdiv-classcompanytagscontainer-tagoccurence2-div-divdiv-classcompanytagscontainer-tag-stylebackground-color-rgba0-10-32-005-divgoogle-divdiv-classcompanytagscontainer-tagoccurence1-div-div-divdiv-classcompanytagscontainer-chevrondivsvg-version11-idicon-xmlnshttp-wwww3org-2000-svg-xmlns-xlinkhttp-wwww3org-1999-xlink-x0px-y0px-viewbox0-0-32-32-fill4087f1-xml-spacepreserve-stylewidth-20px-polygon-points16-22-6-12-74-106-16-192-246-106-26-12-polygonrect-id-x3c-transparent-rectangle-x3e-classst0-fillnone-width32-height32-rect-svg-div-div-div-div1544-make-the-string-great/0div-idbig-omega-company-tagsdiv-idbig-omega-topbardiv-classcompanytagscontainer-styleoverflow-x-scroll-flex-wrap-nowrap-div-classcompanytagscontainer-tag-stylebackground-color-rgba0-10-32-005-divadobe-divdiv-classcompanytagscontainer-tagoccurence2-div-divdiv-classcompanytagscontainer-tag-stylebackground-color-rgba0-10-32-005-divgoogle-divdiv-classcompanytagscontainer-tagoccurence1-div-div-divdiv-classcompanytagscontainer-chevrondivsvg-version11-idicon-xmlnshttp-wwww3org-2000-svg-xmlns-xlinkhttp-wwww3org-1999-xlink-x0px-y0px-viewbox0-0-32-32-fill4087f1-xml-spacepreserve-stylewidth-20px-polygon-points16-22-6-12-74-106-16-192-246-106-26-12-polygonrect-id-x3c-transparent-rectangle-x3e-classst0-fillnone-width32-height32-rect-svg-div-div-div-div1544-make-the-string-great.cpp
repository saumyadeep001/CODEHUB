class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1;) {
            if (abs(s[i] - s[i + 1]) == 32) {
                s.erase(i, 2); // Erase the current character and its adjacent one
                n -= 2; // Update the size of the string after erasing
                i = max(i - 1, 0); // Update the loop index to check the characters before the erased ones
            } else {
                i++; // Move to the next character
            }
        }
        return s;
    }
};