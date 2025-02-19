class Solution {
public:
    
    int getPivot(vector<int>& arr,int n){
        int s=0;
        int e=n-1;
        int mid = s+(e-s)/2;
        
        while(s<e){
            if(arr[mid] >= arr[0])
            {
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
    
    
    int binarySearch(vector<int>& arr,int s,int e,int key ){
        int start = s;
        int end = e;
        
        int mid = start + (end-start)/2;
         while(start <= end){
             if (arr[mid]==key){
                 return mid;
             }
             if (arr[mid] <key){
                 start = mid + 1;
             }
             if(arr[mid]> key){
                 end = mid - 1;   
             }
             mid = start + (end - start)/2;
         }
        return -1;
    }
     
    int search(vector<int>& nums, int k) {
        int pivot = getPivot(nums,nums.size());
        if (k>=nums[pivot] && k<=nums[nums.size()-1]){
return binarySearch(nums,pivot,nums.size()-1,k);
        }
        else{
            return binarySearch(nums,0,pivot-1,k);
        }
        
    }
};