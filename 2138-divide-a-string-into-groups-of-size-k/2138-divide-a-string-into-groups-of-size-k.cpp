class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        if(n%k!=0){
           while(n%k!=0){
               s+=fill;
               n++;
           }
        }
        vector<string> ans;
        for(int i =0;i<n;i+=k)
            ans.push_back(s.substr(i,k));
          return ans;
          }
};

