class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int s=0,e=n-1;
        while(colors[0]==colors[e])
            e--;
        while(colors[n-1] == colors[s])
            s++;
        return max(e,n-s-1);
    }
};

   