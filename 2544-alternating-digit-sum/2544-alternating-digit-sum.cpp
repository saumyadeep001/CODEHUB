class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int size = s.size();
        int ans = 0;

        for(int i = 0; i < size; i++) {
            int digit = s[i] - '0';
            if (i % 2 == 0)  ans += digit; 
            else ans -= digit;       
        }
        return ans;
    }
};
