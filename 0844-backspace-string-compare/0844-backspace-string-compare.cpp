class Solution {
public:
    string pstring(string str){
         string s;
        for(char c : str){
        if( c == '#' && !s.empty()){
           s.pop_back();
        } else if ( c!= '#'){
            s.push_back(c);
        }
        }
        return s;
    }  
    
    bool backspaceCompare(string s, string t) {
        return pstring(s) == pstring(t);
    }
};

