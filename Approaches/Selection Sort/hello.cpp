// #include<iostream>
// #include<vector>
// using namespace std;


// vector <int> selection_sort(vector <int> v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         int ans=i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[ans]){
//                 ans=j;
//             }
//         }
//         swap(v[i],v[ans]);
//     }
//     return v;
// }

// vector <int> sel_sort(vector <int> nums){
//     int n=nums.size();
//     for(int i=0;i<n-1;i++){
//         int ans=i;                   // storing the index of the minimum element
//         for(int j=i+1;j<n;j++){
//             if(nums[j]<nums[ans]);
//             ans=i;
//         }
//         swap(nums[i],nums[ans]);
//     }
//     return nums;
// }


// int main(){
//     vector <int> v={3,5,9,1,4,4,4,2};
//     auto x=selection_sort(v);
//     for(auto y:x){
//         cout<<y;
//     }
//     return 0;
// }

// take the outer loop from 0 to n-1 , no need to sort last element , sorting till n-1 will automatically sort that element
// inner loop from i+1 to n
//store the minimum index by comparing with next elements 
// swap the min element with the element having the i position



// selection sort best case TC : O(n^2)
// worst : O(n^2)
