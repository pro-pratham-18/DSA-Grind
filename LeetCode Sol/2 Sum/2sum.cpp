// when the array is not sorted 

//using hash_map(unordered_set)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>mp;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int x=target-nums[i];    //x is the second element jisko add karne ke baad sum target ke barabar hoga
//             auto it=mp.find(x);
//             if(it!=mp.end()){
//                 return {i,it->second};
//             }
//             mp.emplace(nums[i],i);
//         }
//         return {-1,-1};
//     }
// };




