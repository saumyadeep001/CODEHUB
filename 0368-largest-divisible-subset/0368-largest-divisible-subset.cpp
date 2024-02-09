// class Solution {
// public:
//     vector<int> ans;
//     void lds(vector<int> temp,int i,int prev,vector<int>& nums){
        
//         if(i>=nums.size()){
//             if(temp.size()>ans.size())  ans=temp;
//             return;
//         }
//         if(nums[i]%prev==0){  
//             temp.push_back(nums[i]);
//             lds(temp,i+1,nums[i],nums);
//             temp.pop_back();
//         }
//         lds(temp,i+1,prev,nums);
//     }
    
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> temp;
//         lds(temp,0,1,nums);
//         return ans;
//     }
// };
  

// it will give tle in recursion case 


class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<int> dp(n, 1);  // dp[i] represents the size of the largest divisible subset ending at index i
        vector<int> prev(n, -1);  // prev[i] stores the index of the previous element in the subset

        int maxIndex = 0;  // index of the last element in the largest divisible subset

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }

            if (dp[i] > dp[maxIndex]) {
                maxIndex = i;
            }
        }

        // Reconstruct the largest divisible subset
        vector<int> result;
        while (maxIndex != -1) {
            result.push_back(nums[maxIndex]);
            maxIndex = prev[maxIndex];
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

