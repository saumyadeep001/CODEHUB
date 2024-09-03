class Solution {
public:
    int getLucky(string s, int k) {
        int ans = 0;
        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            int val = s[i] - 'a' + 1;
            ans += val / 10 + val % 10;
        }
        
        k = k - 1;
        while(k--) {
            int res = 0;
            while(ans > 0) {
                res += ans % 10;
                ans /= 10;
            }
            ans = res;
        }
        
        return ans;
    }
};
