class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ans;
        for(auto s:tokens){
            if(s=="+" or s=="-" or s=="*" or s=="/"){
                long x=ans.top();
                ans.pop();
                int y =ans.top();
                ans.pop();
                if(s=="+") ans.push(x+y);
                else if(s=="-") ans.push(y-x);
                else if(s=="*") ans.push(x*y);
                else  ans.push(y/x);
            }
            else{
                int last=stoi(s);
                ans.push(last);
            }
        }
        return ans.top();
    }
};


