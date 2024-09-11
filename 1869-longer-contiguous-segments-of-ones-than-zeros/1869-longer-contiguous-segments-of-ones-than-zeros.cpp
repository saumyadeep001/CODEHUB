class Solution {
public:
   bool checkZeroOnes(string s) {
    int cnt0 = 0 , cnt1 = 0 , mx0 = 0 , mx1 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cnt1++;
            cnt0 = 0;
            mx1 = max(cnt1 , mx1);
        }
        else{
            cnt0++;
            cnt1 = 0;
            mx0 = max(cnt0 , mx0);
        }
    }
    return mx1 > mx0;
}
};