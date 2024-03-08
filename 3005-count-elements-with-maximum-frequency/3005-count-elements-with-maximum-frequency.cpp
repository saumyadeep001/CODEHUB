class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        int mxfreq = 0, ans;
        for(auto p: freq){
            if(p.second > mxfreq){
                ans = 1;
                mxfreq = p.second;
            }
            else if(p.second == mxfreq){
                ans++;
            }
        }
        return ans * mxfreq;
    }
};