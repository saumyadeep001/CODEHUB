class Solution {
public:
    bool checkOnesSegment(string s) {
        int l=0, r=s.size()-1; 
        while(s[l] == '0')
            l++; 
        while(s[r] == '0')
            r--; 
        while(l<=r){ 
            if(s[l] == '0') 
                return false; 
            l++;
        }
        return true; 
    }
};