class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans;
        sort(str.begin(),str.end());
        string x = str[0],y = str[n-1];
        
        for(int i =0; i < x.size(); i++){
          if(x[i] == y[i]) {
              
              ans += x[i];
          }else{
              break;
          }
        }
        return ans;
    }
};


     