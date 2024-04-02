class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> m1,m2;
        for(int i =0;i<s.length();i++){
           if(m1[s[i]] && m1[s[i]] !=t[i]) 
               return 0;
            if (m2[t[i]] && m2[t[i]]!=s[i])
                return 0;
              m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        return 1;
    }
};


// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         vector<int>a(128,-1);
//         vector<int>b(128,-1);
//         for(int i=0;i<s.size();i++)
//         {
            
//             if(a[s[i]]!=b[t[i]])
//             {
//                 return false;
//             }
//             a[s[i]]=i;
//             b[t[i]]=i;
//         }
//         return true;
//     }
// };
