
// first try accepted

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector <int> v;
//         int n=nums.size();
//         if(n==1){
//             return {};
//         }
//         int l=0;
//         int r=1;
//         while(r<n){
//             if(nums[l]==nums[r]){
//                 v.push_back(nums[l]);
//                 l++;
//                 r++;
//             }
//             else{
//                 l++;
//                 r++;
//             }
//         }
//         return v;
//     }
// };

//---------------------------------------------------------------------------------------------------

//preferred optimal 


