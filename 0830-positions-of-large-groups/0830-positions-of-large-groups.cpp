class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        vector<vector<int>>ans;
        for(int i =0; i<s.length(); i++){
            int j=i;
         while(j<s.length() and s[i]==s[j]) j++;
            if(j-i>=3) ans.push_back({i,j-1});
            i=j-1;
        }
        return ans;
    }
};

