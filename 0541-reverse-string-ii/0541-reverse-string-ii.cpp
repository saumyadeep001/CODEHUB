class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.length();
        for(int i = 0 ; i<n; i+=2*k){
         for(int j= i , l = min(i+k-1, n-1) ; j<l ;){
               swap(s[j],s[l]);
             j++;
             l--;
         }
        }
        return s;
    }
};
