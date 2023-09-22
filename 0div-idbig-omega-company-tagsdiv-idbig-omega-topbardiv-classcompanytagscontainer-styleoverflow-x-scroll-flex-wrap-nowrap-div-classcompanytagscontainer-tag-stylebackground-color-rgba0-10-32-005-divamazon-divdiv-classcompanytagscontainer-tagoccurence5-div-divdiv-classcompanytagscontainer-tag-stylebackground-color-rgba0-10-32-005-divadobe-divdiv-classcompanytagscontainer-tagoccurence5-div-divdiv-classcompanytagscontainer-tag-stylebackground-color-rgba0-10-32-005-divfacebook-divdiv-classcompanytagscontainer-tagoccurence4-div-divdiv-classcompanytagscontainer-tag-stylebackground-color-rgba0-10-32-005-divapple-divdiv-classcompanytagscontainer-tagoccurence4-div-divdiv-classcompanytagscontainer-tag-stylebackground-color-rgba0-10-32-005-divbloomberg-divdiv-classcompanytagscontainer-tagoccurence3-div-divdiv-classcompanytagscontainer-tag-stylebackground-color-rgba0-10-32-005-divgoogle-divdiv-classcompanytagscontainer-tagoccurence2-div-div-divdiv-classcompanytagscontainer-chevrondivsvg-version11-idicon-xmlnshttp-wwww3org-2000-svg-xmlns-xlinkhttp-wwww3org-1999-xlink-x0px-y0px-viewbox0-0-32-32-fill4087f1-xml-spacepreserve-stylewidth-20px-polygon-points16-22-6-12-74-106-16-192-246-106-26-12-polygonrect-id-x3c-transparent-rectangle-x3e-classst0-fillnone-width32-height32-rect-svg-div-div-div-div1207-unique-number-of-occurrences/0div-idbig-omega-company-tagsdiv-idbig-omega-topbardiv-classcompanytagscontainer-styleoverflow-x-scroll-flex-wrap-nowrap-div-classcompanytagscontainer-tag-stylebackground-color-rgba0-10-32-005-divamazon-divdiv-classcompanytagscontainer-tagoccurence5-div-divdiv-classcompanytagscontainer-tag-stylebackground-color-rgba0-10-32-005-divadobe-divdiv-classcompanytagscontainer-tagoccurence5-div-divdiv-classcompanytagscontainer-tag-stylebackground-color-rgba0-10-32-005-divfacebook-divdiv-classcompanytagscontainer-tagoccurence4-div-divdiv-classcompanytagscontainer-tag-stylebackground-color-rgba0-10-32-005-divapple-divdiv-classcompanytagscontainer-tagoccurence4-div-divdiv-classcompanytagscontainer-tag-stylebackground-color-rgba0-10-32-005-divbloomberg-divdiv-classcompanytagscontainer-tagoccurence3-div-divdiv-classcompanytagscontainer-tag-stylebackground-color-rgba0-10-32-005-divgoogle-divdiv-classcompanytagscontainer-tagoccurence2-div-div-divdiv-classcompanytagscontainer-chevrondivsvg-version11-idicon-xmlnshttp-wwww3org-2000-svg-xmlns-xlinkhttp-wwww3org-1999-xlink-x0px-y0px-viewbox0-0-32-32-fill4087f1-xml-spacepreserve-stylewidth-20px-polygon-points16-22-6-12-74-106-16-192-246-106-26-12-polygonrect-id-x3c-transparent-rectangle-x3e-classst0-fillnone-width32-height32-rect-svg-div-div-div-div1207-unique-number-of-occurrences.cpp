class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        set<int> s;
        int j = 0;
        sort(arr.begin(),arr.end());
        for(int i = 0; i< arr.size();){
        int cnt = count(arr.begin(),arr.end(), arr[i]);
            s.insert(cnt);
            j++;
            i+=cnt;
        }
        if(s.size()!= j) return false;
        return true;
        
    }
};

	