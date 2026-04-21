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
// when element is 2, swap with the end pointer an ddecrease end pointer by 1 (e--)

//--------------------------------------------------------------------------------------------------------------------

// 4 color sorting way using two partition , TC - O(n) (approach)


// #include<iostream>
// #include<vector>
// using namespace std;

// vector <int> color_sort(vector <int> nums){
//     int n=nums.size();
//     int s1=0;
//     int s2=0;
//     int e=n-1;
//     while(s2<=e){
//         if(nums[s2]==0){
//             swap(nums[s1],nums[s2]);
//             s1++;
//             s2++;
//         }
//         else if(nums[s2]==1 || nums[s2]==2){
//             s2++;
//         }
//         else{
//             swap(nums[s2],nums[e]);
//             e--;
//         }
//     }
//     int s3=s1;
//     while(s3<=e){
//         if(nums[s3]==1){
//             swap(nums[s1],nums[s3]);
//             s1++;
//             s3++;
//         }
//         else{
//             s3++;
//         }
//     }
//     return nums;
// }

// int main(){
//     vector <int> v={0,2,3,2,1,3,0,1,2,3,1,0,3,2,1};
//     auto x=color_sort(v);
//     for(int i:x){
//         cout<<i;
//     }
//     return 0;
// }


// first sort 0 and 3 , skip 1 and 2 as we were skipping 1 using 3 pointers
// then take the left pointer and end pointer after the 0 and 3 are sorted (placed at the end)
// now use two pointer , go from left pointer to end pointer ,(while(s1<=e)) , and sort one to left as we used to do it for zero using two pointers.











