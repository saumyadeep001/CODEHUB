class Solution {
public:
    int mod = 1e9 + 7;

    long long power(long long b, long long a, long long mod) {
        long long ans = 1;
        while (a != 0) {
            if (a % 2 == 1) {
                ans = (ans * b) % mod;
            }
            b = (b * b) % mod;
            a /= 2;
        }
        return ans;
    }
    
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long e = power(5, even, mod);
        long long o = power(4, odd, mod);
        return (e * o) % mod;
    }
};
