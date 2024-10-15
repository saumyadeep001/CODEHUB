class Solution {
public:
    int countHomogenous(string s) {
        long long mod = 1e9 + 7;
        long long ans = 0, cnt = 1;
        int n = s.size();
        
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                cnt++;
            } else {
                ans += (cnt * (cnt + 1)) / 2;
                ans %= mod;
                cnt = 1;
            }
        }
        
        ans += (cnt * (cnt + 1)) / 2;
        ans %= mod;
        
        return ans;
    }
};


// var countHomogenous = function(s) {
//     let left = 0;
//     let res = 0;

//     for (let right = 0; right < s.length; right++) {
//         if (s[left] === s[right]) {
//             res += right - left + 1;
//         } else {
//             res += 1;
//             left = right;
//         }
//     }

//     return res % (Math.pow(10, 9) + 7);    
// };