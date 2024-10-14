class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q(gifts.begin(), gifts.end());
        long long ans = 0;
        
        for (int i = 0; i < k; i++) {
            int a = q.top();
            q.pop();
            
            int b = floor(sqrt(a)); 
            q.push(b);
        }

        while (!q.empty()) {
            ans += q.top();
            q.pop();
        }

        return ans;
    }
};
