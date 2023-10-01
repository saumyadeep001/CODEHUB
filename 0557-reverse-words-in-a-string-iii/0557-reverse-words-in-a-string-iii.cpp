class Solution {
public:
    string reverseWords(string s) {
        
        int begin =0;
        for(int i = 0; i<= s.length(); i++){
            if(i==s.length() || s[i]== ' '){
            reverse(&s[begin], &s[i]);
                begin = i+1;
            }
        }
      return s;  
    }
};


