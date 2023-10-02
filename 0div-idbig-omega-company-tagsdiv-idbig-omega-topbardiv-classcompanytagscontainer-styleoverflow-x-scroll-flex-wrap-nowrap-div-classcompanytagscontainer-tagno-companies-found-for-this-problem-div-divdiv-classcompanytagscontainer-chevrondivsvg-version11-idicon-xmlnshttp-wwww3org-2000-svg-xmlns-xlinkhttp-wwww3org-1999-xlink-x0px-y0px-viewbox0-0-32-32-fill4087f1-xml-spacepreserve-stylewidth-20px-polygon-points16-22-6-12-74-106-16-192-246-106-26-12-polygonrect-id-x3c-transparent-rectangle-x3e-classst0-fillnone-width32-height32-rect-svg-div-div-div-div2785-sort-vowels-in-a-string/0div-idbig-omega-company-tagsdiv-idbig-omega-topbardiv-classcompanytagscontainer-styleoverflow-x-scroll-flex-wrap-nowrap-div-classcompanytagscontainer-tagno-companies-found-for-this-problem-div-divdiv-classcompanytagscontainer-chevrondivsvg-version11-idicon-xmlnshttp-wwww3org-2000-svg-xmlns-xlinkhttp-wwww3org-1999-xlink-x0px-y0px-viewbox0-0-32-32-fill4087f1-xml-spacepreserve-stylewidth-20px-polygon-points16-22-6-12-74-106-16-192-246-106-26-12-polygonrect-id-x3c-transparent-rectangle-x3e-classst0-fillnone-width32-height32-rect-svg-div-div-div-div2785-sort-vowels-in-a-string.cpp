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



// lass Solution {
// public:
//     string sortVowels(string s) {
//         // All vowels
//         vector<char> vow = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//         string ans;
//         // vector to store vowels
//         vector<char> store;
//         // Iterate the string
//         for(char c: s){
//             // If c is a vowel, append to store
//             if(find(vow.begin(), vow.end(), c) != vow.end()){
//                 store.push_back(c);
//             }
//         }
//         // sort all vowels with increasing ASCII
//         sort(store.begin(), store.end());

//         int idx = 0;
//         for(char c: s){
//             // When a vowel appears, call the sorted vector
//             if(find(vow.begin(), vow.end(), c) != vow.end()){
//                 ans += store[idx++];
//             }
//             else    ans += c;
//         }

//         return ans;
//     }
// };