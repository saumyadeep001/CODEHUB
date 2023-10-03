class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       int sum  = accumulate(arr.begin(),arr.end(),0);
        int cnt =0, sum1 =0;
        if(sum%3==0){
            
            for(int a: arr){
                sum1+=a;
                
                if( sum1 == (sum/3)){
                    cnt++;
                    sum1 =0;
                }
            }
        }
        return cnt >=3;
    }
};
