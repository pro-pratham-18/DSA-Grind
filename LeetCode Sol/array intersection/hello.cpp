//first try accepted  (bulky loops)

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> v;
//         for(int x :nums1){
//             for(int y:nums2){
//                 if(x==y){
//                     auto z=find(v.begin(),v.end(),x);
//                     if(z==v.end()){
//                         v.push_back(x);
//                     }
//                     y=INT_MIN;
//                     break;
//                 }
//             }
//         }
//         return v;
//     }
// };

// with onlogn complexity

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> v;
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         int n1=nums1.size();
//         int n2=nums2.size();
//         int i=0;
//         int j=0;
//         while(i<n1 && j<n2){
//             if(nums1[i]==nums2[j]){
//                 if(v.empty() || v.back()!=nums1[i]){
//                     v.push_back(nums1[i]);
//                 }
//                 i++;
//                 j++;
//             }
//             else if(nums1[i]<=nums2[j]){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return v;
//     }
// };



// optimal preferred using hashmap(not learned yet), when you wil learn, do for sorted array case as well

