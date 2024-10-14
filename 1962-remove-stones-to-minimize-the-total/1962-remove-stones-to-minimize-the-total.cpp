class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q(piles.begin(), piles.end());
        long long ans = 0;

        for (int i = 0; i < k; i++) {
            int a = q.top();
            q.pop();

            int b = a - floor(a / 2.0); 
            q.push(b);  
        }

        while (!q.empty()) {
            ans += q.top();
            q.pop();
        }

        return ans;
    }
};
