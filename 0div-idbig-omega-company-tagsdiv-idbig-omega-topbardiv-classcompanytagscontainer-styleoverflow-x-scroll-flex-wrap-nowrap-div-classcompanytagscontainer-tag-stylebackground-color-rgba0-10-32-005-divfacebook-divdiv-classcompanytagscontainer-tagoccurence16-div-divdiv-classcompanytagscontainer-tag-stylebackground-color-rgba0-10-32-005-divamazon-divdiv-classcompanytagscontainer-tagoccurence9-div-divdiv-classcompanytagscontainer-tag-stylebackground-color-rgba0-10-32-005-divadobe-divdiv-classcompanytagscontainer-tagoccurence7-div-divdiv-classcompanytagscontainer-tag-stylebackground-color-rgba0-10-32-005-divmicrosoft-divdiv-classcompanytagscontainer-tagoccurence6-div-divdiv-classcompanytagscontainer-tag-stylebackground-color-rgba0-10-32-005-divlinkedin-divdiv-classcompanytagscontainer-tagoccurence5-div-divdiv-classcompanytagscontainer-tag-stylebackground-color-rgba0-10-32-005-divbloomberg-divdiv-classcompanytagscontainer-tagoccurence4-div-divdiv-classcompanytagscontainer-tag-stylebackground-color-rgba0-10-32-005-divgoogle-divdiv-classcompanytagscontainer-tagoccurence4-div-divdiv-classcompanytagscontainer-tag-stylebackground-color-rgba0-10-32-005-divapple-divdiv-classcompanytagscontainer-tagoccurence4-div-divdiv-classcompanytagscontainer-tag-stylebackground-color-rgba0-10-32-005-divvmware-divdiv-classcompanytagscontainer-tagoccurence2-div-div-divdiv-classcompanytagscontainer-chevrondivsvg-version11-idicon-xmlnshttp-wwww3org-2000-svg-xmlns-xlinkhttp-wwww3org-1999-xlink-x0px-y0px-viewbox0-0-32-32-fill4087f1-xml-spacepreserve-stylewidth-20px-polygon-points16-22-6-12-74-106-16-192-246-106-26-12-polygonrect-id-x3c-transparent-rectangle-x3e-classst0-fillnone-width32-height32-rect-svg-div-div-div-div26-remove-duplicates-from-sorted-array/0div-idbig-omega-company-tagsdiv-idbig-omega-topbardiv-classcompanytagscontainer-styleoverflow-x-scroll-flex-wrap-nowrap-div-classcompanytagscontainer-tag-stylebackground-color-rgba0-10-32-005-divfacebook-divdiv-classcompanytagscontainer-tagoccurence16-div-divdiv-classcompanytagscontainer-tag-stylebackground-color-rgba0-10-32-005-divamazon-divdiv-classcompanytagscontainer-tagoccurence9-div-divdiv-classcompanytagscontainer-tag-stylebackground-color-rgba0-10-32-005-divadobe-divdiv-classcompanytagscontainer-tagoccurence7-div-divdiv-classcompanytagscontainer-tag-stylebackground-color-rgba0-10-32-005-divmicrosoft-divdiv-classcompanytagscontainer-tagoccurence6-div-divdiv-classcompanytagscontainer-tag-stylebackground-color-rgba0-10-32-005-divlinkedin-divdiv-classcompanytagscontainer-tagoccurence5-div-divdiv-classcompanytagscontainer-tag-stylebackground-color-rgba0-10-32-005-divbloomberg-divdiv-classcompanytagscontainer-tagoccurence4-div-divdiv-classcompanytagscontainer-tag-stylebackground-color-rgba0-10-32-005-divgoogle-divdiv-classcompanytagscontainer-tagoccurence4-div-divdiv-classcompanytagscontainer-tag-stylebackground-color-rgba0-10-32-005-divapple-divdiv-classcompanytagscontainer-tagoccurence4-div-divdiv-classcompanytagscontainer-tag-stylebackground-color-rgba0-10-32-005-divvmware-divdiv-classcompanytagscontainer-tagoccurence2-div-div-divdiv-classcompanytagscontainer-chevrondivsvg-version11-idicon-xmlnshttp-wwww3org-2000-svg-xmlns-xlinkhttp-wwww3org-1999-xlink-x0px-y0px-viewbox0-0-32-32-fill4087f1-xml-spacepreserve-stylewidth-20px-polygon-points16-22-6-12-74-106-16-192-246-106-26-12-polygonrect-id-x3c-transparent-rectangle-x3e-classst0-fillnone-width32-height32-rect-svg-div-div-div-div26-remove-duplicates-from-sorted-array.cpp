class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int cnt = 0;
        for(int i = 1; i<A.size(); i++){
       if(A[i]==A[i-1]) cnt++;
            else A[i-cnt] = A[i];
        }
        return A.size()-cnt;
    }
};