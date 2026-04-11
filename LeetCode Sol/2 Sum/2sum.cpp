// when the array is not sorted 
// using two pointers and pair

//class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector <pair<int,int>> v1;
//         for(int i=0;i<n;i++){
//             v1.emplace_back(nums[i],i);
//         }
//         sort(v1.begin(),v1.end());
//         int s=0;
//         int e=n-1;
//         while(s<e){
//             int sum=v1[s].first+v1[e].first;
//             if(sum==target){
//                 return {v1[s].second,v1[e].second};
//             }
//             else if(sum>target){
//                 e--;
//             }
//             else{
//                 s++;
//             }
//         }
//         return {};
//     }
// };