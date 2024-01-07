// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         for(int i =0;i<s.size();i++){
//             if(s[i]!=t[i])
//                 return t[i];
//         }
//         return t[s.size()];
//     }
// };

// class Solution{
// public:
//     char findTheDifference(string s, string t){
//      int sum1=0,sum2=t.length();
//         for(int i =0;i<s.length();i++){
//           sum1 += s[i];
//           sum2 += t[i];
//         }
//         return char(abs(sum2-sum1));
//     }
// };
class Solution {
public:
	char findTheDifference(string s, string t) {
		char ans = t[s.size()];
		for(int i = 0; i < s.size(); i++){
			ans ^= s[i] ^ t[i];
		}
		return ans;
	}
};