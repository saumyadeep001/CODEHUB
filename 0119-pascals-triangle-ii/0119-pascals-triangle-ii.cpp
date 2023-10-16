class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        ans[0]=ans[rowIndex]=1;
        long long int temp=1;
        for(int i=1,up=rowIndex,down=1;i<=rowIndex;up--,down++,i++)
        {
           temp=temp*up/down;
            ans[i]=temp;
        }
        return ans;
    }
};