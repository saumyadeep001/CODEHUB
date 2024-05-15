class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int row = A.size();
        if(row==0) return 0;
        int col = A[0].size();
        
        int ans = 0;
        for(int j=0; j<col; j++)
        {
            int sum = 0;
            for(int i=0; i<row; i++)
                sum += A[i][j] ^ A[i][0]; 
            ans += max(sum, row-sum)*pow(2,col-1-j);
        }
        
        return ans;
    }
};