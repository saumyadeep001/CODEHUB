class Solution {
public:
    int minimumPushes(string word) {
        int cnt = (word.length()) / 8;
        int extra = word.length() % 8;
        return ((cnt * (cnt + 1) / 2) * 8) + (cnt + 1) * extra;
    }
};