class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,ans=0;
        for(int i :s){
            r += i=='R' ? 1:0;
            l += i=='L' ? 1:0;
            ans += r==l ? 1:0;
        }
        return ans;
    }
};