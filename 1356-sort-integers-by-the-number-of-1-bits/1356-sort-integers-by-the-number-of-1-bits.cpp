class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmpfun);
        return arr;
    }
    
    private:
    static int compareOnes(int n){
     int cnt =0;
        while(n){
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
    
    static bool cmpfun(int a, int b){
        int c = compareOnes(a),d = compareOnes(b);
        if(c==d)
            return (a<=b);
        else 
            return(c<d);
    }
};