class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i:nums)
            v.push_back(to_string(i));
        sort(v.begin(),v.end(),[](const string &a,const string &b ){
            return a+b > b+a;
        });
        string ans;
        for(const string& str: v)
            ans += str;
        
        return (ans[0] =='0') ? "0" : ans;
    }
};