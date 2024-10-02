class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n==0) return {};
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        map<int, int> mp;
        mp[temp[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (temp[i - 1] != temp[i]) {
                mp[temp[i]] = mp[temp[i - 1]] + 1;
            } else {
                mp[temp[i]] = mp[temp[i - 1]];
            }
        }
        vector<int> res(n, 0);

        for (int i = 0; i < n; i++) {
            res[i] = mp[arr[i]];
        }
        return res;
    }
};