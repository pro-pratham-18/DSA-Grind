
// best optimal using hash set (preferred) time complexity O(n)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
        
//         for(int i = 0; i < nums.size(); i++){
//             if(s.find(nums[i]) != s.end()){
//                 return true;
//             }
//             s.insert(nums[i]);
//         }
        
//         return false;
//     }


// };



//good one as well  with TC O(nlogn)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int s=0;
//         int e=1;
//         while(e<n){
//             if(nums[s]==nums[e]){
//                 return true;
//             }
//             s++;
//             e++;
//         }
//         return false;
//     }
// };

