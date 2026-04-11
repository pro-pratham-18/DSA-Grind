//optimal, using for loop and two pointer

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector <vector<int>> v;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int s=i+1;
//             int e=n-1;
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             while(s<e){
//                 int sum=nums[i]+nums[s]+nums[e];
//                 if(sum==0){
//                     v.push_back({nums[i],nums[s],nums[e]});
//                     s++;
//                     e--;
//                     while(s<e && nums[s]==nums[s-1]) s++;
//                     while(s < e && nums[e] == nums[e+1]) e--;
//                 }
//                 else if(sum<0){
//                     s++;
//                 }
//                 else{
//                     e--;
//                 }
//             }
//         }
//         return v;
//     }
// };

