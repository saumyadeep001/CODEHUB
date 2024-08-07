class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int e=0,o=odd.size()-1;
        for(int i=0;i<nums.size();i++){
            if(i%2==0 && e<even.size()){
                nums[i]=even[e++];
            }else if(i%2!=0 && o>=0){
                nums[i]=odd[o--];
            }
        }
        return nums;       
    }
};