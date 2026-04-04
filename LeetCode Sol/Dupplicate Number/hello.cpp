
// lc 287

// first try accepted using two pointer approach 

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int l=0;
//         int r=1;
//         while(r<n){
//             if(nums[l]==nums[r]){
//                 return nums[l];
//             }
//             else{
//                 l+=1;
//                 r+=1;
//             }
//         }
//         return 0;
//     }
// };

// optimal (using floyd cycle detectionnd linked list)

















// another type (on coding ninjas or the code studio) (it doesnt contain the [3,3,3,3,3] test csase)

    // array size --> n 
    // must elements 1 to n-1 
    // one extra element (which is from 1 to n-1)

    // example : {1,2,3,4,5,5}      {1,3,3,2,4,5}

    // the optimal code is:
    
    //     class Solution {
    // public:
    //     int findDuplicate(vector<int>& nums) {
    //         int ans=0;
    //         int n=nums.size();
    //         for(int i=1;i<n;i++){
    //             ans^=i;
    //         }
    //         for(int x:nums){
    //             ans^=x;
    //         }
    //         return ans;
    //     }
    // };











