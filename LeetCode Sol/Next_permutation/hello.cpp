//preferred optimal

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int piv=-1;
//         int n=nums.size();
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 piv = i;
//                 break;
//             }
//         }
//         if(piv==-1){
//             reverse(nums.begin(),nums.end());
//             return;                                    // remember this return , as we stop the execution here for strict decreasing input example(1,2,3,4,5)
//         }

//         for(int i=n-1;i>piv;i--){
//             if(nums[i]>nums[piv]){
//                 swap(nums[piv],nums[i]);
//                 break;
//             }
//         }
//         reverse(nums.begin()+(piv+1),nums.end());
//     }
// };

