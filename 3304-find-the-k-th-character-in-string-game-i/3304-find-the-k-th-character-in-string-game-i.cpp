class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.length() < k) {
            string s = "";
            for (char c : word) {
                s += (c == 'z') ? 'a' : c + 1;
            }
            word += s;
        }
        return word[k - 1];
    }
};
