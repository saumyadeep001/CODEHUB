class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i =0;
        long long r = sqrt(c);
        
        while(i<=r){
            long long p = i*i+r*r;
            if(p<c) i++;
            if(p>c) r--;
            if(p==c) return true; 
        }
        return false;
    }
};