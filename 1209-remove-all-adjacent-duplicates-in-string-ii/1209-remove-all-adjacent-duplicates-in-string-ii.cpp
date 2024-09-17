class Solution {
public:
    string removeDuplicates(string s, int k) {
     vector<pair<char,int>> v;
        for(auto c: s){
            if(v.size()==0 or v.back().first != c)
                v.push_back({c,1});
            else
                v.back().second++;
            
            if(v.back().second==k) v.pop_back();
        }
        
        string ans;
        for(auto x:v) ans.append(x.second,x.first);
        
        return ans;
    }
};