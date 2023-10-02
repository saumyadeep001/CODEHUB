class Solution {
public:
    string sortVowels(string s) {
        
        vector<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        vector<char> store;
        for(char c: s){
            if(find(vowel.begin(),vowel.end(),c) != vowel.end()){
                store.push_back(c);
            }
        }
        sort(store.begin(), store.end());
         string ans;
        int i =0;
        for(char c:s){
             if(find(vowel.begin(),vowel.end(),c) != vowel.end()){
                ans += store[i];
                 i++;
             }
            else ans+=c;
        }
      return ans;  
    }
};



