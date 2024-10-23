class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.length(), cnt = 0;
        
        for (int l = 0; l < n; ++l) {
            vector<int> v(26, 0);
            for (int r = l; r < n; ++r) {
                v[s[r] - 'a']++;
                bool valid = false;
                for (int i = 0; i < 26; ++i) {
                    if (v[i] >= k) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    cnt += (n - r);
                    break;
                }
            }
        }
        
        return cnt;
    }
};
