class Solution {
public:
     vector<vector<int>>dp;
    
    int help(vector<int>&cost, vector<int>&time, int idx, int ppt){
        
         if(ppt <= 0) return 0;
         if(idx >= cost.size()) return 1e9;
        
        if(dp[idx][ppt] != -1) return dp[idx][ppt];
        
          int take=INT_MAX, nottake= INT_MAX;
        
           nottake= 0 + help(cost, time, idx+1, ppt);
       
          take= cost[idx] + help(cost, time, idx+1, ppt-time[idx]-1);
        
        return dp[idx][ppt]= min(take,nottake);
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
       dp.resize(cost.size()+1, vector<int>(time.size()+1, -1) );
        return help(cost, time,0, time.size());
    }
};