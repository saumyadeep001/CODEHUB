class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0,j =0, n= spaces.size(),m=s.size();
        string ans;
        while(i<m){
            if(j<n&& i==spaces[j]){
                ans+=" ";
                j++;
            }
            ans+=s[i];
            i++;
        }
        return ans;
    }
};

