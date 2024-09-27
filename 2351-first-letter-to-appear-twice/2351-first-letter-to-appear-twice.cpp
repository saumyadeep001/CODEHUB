// class Solution {
// public:
//     char repeatedCharacter(string s) {
//              int arr[26]={0};
//       for(int i =0; i<s.length(); i++){
//           int j= s[i]-'a';
//           arr[j]++;
//       }
        
//         for(int i =0;i<s.length();i++){
//            if(arr[s[i]-'a'] == 2)
//                return i;
             
//         }
//         return -1;
//     }
// };


class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> v(26);
        for(char c:s){
            if(v[c-'a'])return c;
			v[c-'a']=true;
        }
        return 'a';
    }
};
