
// best optimal TC O(logn)

// class Solution {  
// public:
//     int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector <pair<int,int>> v;
//         for(int i=0;i<n;i++){
//             v.emplace_back(nums[i],i);
//         }
//         sort(v.begin(),v.end());
//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(v[mid].first==target){
//                 return v[mid].second;
//             }
//             else if(v[mid].first<target){
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         return -1;
//     }
// };


