class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string prefix;
        prefix.reserve(size(s));
        for (const string& word : words) {
            if (size(prefix) < size(s)) {
                prefix += word;
            } else {
                break;
            }
        }
        return s == prefix;
    }
};