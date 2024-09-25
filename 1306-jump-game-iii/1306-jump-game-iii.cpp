class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
       if(arr[start]==-1) return false;
       if(!arr[start]) return true;
       int l = start-arr[start];
        int r= start+arr[start];
        arr[start] =-1;
        int n  = arr.size();
        int ans = (r<n and canReach(arr,r)) or (l>=0 and canReach(arr,l));
        return ans;
    }
};

