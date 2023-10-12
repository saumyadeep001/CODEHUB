// class Solution {
// public:
//     vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
//     {
//         vector<vector<int >> ans;
//         int i=0;
//         int j=0;
//         int n = nums1.size();
//         int m = nums2.size();
        
//         while(i < n && j < m)
//         {
//             int id1 = nums1[i][0];
//             int id2 = nums2[j][0];
            
//             if(id1 == id2)
//             {
//                 int sum = nums1[i++][1] + nums2[j++][1];
//                 ans.push_back({id1,sum});
//             }
            
//             else if(id1 > id2)
//             {
//                 ans.push_back({id2,nums2[j++][1]});
//             }
            
//             else if(id1 < id2)
//             {
//                 ans.push_back({id1,nums1[i++][1]});
//             }                     
//         }
        
//         while(i < n)
//         {
//             int id1 = nums1[i++][0];
//             ans.push_back({id1,nums1[i][1]});
//         }
        
//         while(j < m)
//         {
//             int id2 = nums2[j++][0];
//             ans.push_back({id2,nums2[j][1]});
//         }
        
//         return ans;
//     }
// };

class Solution {
	public:
		vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2){
			map<int,int> mp;
			vector<vector<int>> ans;
			for(auto i:nums1) mp[i[0]]+=i[1];
			for(auto i:nums2) mp[i[0]]+=i[1];
			for(auto i:mp) ans.push_back({i.first,i.second}); 
			return ans;
		}
	};
