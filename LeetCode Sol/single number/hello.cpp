
// method 1 , first try accepted 

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         if(n==1){
//             return nums.at(0);
//         }
//         int l=0;
//         int r=1;
//         while(l<r){
//             if(nums.at(l)==nums.at(r) ){
//                 l+=2;
//                 if(r<n-2){
//                     r+=2;
//                 }
//             }
//             else{
//                 return nums[l];
//             }
//         }
//         return nums[l];
//         }
// };


// optimal preferred
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int i:nums){
//             ans=ans^i;
//         }
//         return ans;
//     }
// };
