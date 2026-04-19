//first try accepted

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int start=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0){
//                 swap(nums[i],nums[start]);
//                 start+=1;
//             }
//         }
//         for(int j=start;j<n;j++){
//             if(nums[j]==1){
//                 swap(nums[j],nums[start]);
//                 start+=1;
//             }
//         }
//         for(auto x:nums){
//             cout<<x<<" ";
//         }

//     }
// };

//-----------------------------------------------------------------------------------------------------------------------------

//optmial to remember (dutch flag algorithm)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n=nums.size();
//         int s=0;
//         int m=0;
//         int e=n-1;
//         while(m<=e){
//             if(nums[m]==0){
//                 swap(nums[m],nums[s]);
//                 s++;
//                 m++;
//             }
//             else if(nums[m]==2){
//                 swap(nums[m],nums[e]);
//                 e--;
//             }
//             else{
//                 m++;
//             }
//         }
//     }
// };

// 3 pointers used (start, middle ,end)
// middle is the element iterator 

// when elemnt is 0 , swap with start pointer , and increase both start and middle by 1 (s++,m++)
// when elemnt is 1 , only increase middle by 1 (m++)
// when element is 2, swap with the end pointer anf decrease end pointer by 1 (e--)











