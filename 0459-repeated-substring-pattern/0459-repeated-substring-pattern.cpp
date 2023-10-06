class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n=s.size();
       string p=s+s;
        for(int i=1;i<n;i++){
            string str=p.substr(i,n);
            if(str==s) return 1;
        }
        return 0;
    }
};