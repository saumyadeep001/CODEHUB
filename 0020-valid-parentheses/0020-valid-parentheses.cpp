class Solution {
public:
    bool isValid(string s) {
        stack<char>bob;
        unordered_map<char,char>mp = {
            {']','['},
            {')','('},
            {'}','{'}
        }; 
      for(char ch:s){
          if(ch == '(' || ch== '[' || ch =='{')
              bob.push(ch);
          else
          {
              if(bob.empty() || bob.top() != mp[ch])
              return false;
              bob.pop();
          }
      }
      return bob.empty();
    }
};