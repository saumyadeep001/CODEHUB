class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<int> q(nums.begin(), nums.end());
        long long ans = 0;
        
        for (int i = 0; i < k; i++) {
            int a = q.top();
            q.pop();
            
            ans += a;
            
            int b = ceil(a / 3.0);
            q.push(b);
        }
        
        return ans;
    }
};