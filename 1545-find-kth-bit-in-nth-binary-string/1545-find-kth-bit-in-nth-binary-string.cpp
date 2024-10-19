class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=0;i<n;i++){
            string f=s;
            for(int j=0;j<s.size();j++) s[j] = s[j]=='0' ? '1':'0';

            reverse(s.begin(),s.end());
            s=f+"1"+s;
            
}
        return s[k-1];
    }
};