// class Solution {
// public:
//     int numSquares(int n) {
//          if (n == 0) {                                                  // part 1
//         return 0;
//     }
    
//     if (n < 0) {                                                   // part 2
//         return INT_MAX;
//     }
    
//     int mini = n;                                                  // part 3 
    
//     int i = 1;
//     while (i * i <= n) {                                           // part 4
//         mini = std::min(mini, numSquares(n - (i * i)));
//         i++;
//     }
    
//     return mini + 1;    
        
//     }
// };

class Solution {
    public:
        int numSquares(int n){
            vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = std::min(dp[i], dp[i - j * j] + 1);
        }
    }

    return dp[n];
   }
};