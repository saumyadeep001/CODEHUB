class Solution {
public:
    int missingNumber(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            while(nums[i]!=nums.size()  && nums[i]!=nums[nums[i]] ){
                swap(nums[i],nums[nums[i]]);
}
        }


        for(int i=0;i<nums.size();i++){
            // cout<<nums[i]<<endl;
            if(nums[i]!=i){
                return i;
              
            }
        };
            
//             class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         for(auto num:nums)
//         {
//            n=n^num;
//             n=n^i;
//             i++;
//         }
//         return n;
//     }
// };


//         }

        return nums.size();
    
}
};