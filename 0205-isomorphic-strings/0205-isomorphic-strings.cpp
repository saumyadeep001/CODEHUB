class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>a(128,-1);
        vector<int>b(128,-1);
        for(int i=0;i<s.size();i++)
        {
            
            if(a[s[i]]!=b[t[i]])
            {
                return false;
            }
            a[s[i]]=i;
            b[t[i]]=i;
        }
        return true;
    }
};