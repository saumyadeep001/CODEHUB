class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainder_count;
        remainder_count[0] = 1;  // To account for subarrays starting from the beginning
        int prefix_sum = 0;
        int count = 0;
        
        for (int num : nums) {
            prefix_sum += num;
            
            // Compute remainder of prefix_sum with respect to k
            int remainder = prefix_sum % k;
            if (remainder < 0) remainder += k;  // Adjust negative remainders
            
            // If this remainder has been seen before, it means there's a subarray
            // with a sum divisible by k
            if (remainder_count.find(remainder) != remainder_count.end()) {
                count += remainder_count[remainder];
            }
            
            // Update the count of this remainder
            remainder_count[remainder]++;
        }
        
        return count;
    }
};

