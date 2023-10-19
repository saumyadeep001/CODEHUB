class Solution {
public:
    string removeStars(string s) {
        
        string str;
        for(char c: s){
        if(c=='*' && !s.empty()){
          str.pop_back();
        }else if(c != '*'){
            str.push_back(c);
        }
        }
       return str; 
    }
};