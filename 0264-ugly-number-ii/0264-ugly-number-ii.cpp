class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(n);
        res[0] = 1;
        int p2=0,p3=0,p5=0;
        for(int i=1;i<n;i++)
        {
            int mini = min(2*res[p2],min(3*res[p3],5*res[p5]));
            res[i] =mini;
            if(res[i]==res[p2]*2){
                p2++;
            }
            if(res[i]==res[p3]*3){
                p3++;
            }
            if(res[i]==res[p5]*5){
                p5++;
            }
        }
        return res[n-1];
    }
};