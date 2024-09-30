class Solution {
public:
int findLucky(vector<int>& arr) {
    unordered_map<int, int> freqMap;
      
    for (int num : arr) {
        freqMap[num]++;
    }
    
    int lucky = -1;
    
    for (const auto& [num, freq] : freqMap) {
        if (num == freq) {
            lucky = max(lucky, num); 
        }
    }
    
    return lucky;
}
};