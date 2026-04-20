
// optimal preferred

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         int leftproduct=1;
//         int rightproduct=1;
//         int maxproduct=nums[0];
//         for(int i=0;i<n;i++){
//             if(leftproduct==0){
//                 leftproduct=1;
//             }
//             if(rightproduct==0){
//                 rightproduct=1;
//             }
//             leftproduct*=nums[i];
//             rightproduct*=nums[n-i-1];

//             maxproduct=max(max(leftproduct,rightproduct),maxproduct);
//         }
//         return maxproduct;
//     }
// };

