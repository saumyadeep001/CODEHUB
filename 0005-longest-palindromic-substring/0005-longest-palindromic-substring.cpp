// class Solution {
// public:
    
//     bool isPalindrome(string s){
//      int i=0,j =s.size()-1;
//         while(i<j){
//          if(s[i++] != s[j--]) 
//             return false;
//         }
//         return true;
//     }
//     string longestPalindrome(string s) {
//         int n = s.size();
//         if(n==0) return "";
//         if(n==1) return s;
        
//         string ans="";
//         for (int i = 0; i < n-1; i++)  {
//             for (int j = 1; j <= n - i; j++){
//                 if (isPalindrome(s.substr(i, j))){
//                     if (ans.size() < j) ans = s.substr(i, j);
//                 }
//             }
//         }
//         return ans;
//     }
// };
             

        ///////////////above sol have  time complexity O(n^3) and optimising it into O(n^2) ////////////
   

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        if (n == 1) return s;

        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        int start = 0; // Start index of the longest palindrome substring
        int maxLen = 1; // Maximum length of the palindrome substring

        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; i++) {
            isPalindrome[i][i] = true;
        }

        // Check for palindromes of length 2
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                isPalindrome[i][i + 1] = true;
                start = i;
                maxLen = 2;
            }
        }

        // Check for palindromes of length >= 3
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                if (s[i] == s[j] && isPalindrome[i + 1][j - 1]) {
                    isPalindrome[i][j] = true;
                    if (len > maxLen) {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};

              
              

