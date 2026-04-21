
// best optimal preferred  TC - Logn
// the peak element will get founded at very end (Sabse aakhiri mai)

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n=arr.size();
//         int s=1;
//         int e=n-2;
//         while(s<e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]<arr[mid+1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//         }
//         return s;
//     }
// };


// left side slope has all element with arr[i]<arr[i+1] (peak element not included)
// elements other than this condition are on right side(including the peak element)
// in a mountain array , there will be atleast three elements , noone equal to any one, and the peak element is not found on ends of the mountain array
// if the peak is not on the ends , then we wont iterate at that places , means we start s from 1 and  from n-2
// we keep shrinking the search area until end , when only the peak element remains having index as s
// then we return the s at the end






