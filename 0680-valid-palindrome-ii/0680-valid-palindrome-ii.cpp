class Solution {
public:
    bool check(int i, int j, string &s, bool flag) {
        if (i >= j)
            return true;
        if (s[i] != s[j]) {
            if (flag)
                return check(i + 1, j, s, false) || check(i, j - 1, s, false);
            else
                return false;
        }
        return check(i + 1, j - 1, s, flag);
    }

    bool validPalindrome(string s) {
        return check(0, s.length() - 1, s, true);
    }
};
