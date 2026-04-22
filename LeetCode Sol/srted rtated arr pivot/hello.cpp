// best optimal preferred Tc- logn

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n=nums.size();
//         int s=0;
//         int e=n-1;
//         while(s<e){
//             int mid=s+(e-s)/2;
//             if(nums[mid]>nums[e]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//         }
//         return nums[s];
//     }
// };

// rotated sorted arr characteristics :

//pivot is the point about which the sorting order breaks
// pivot basically is the minimum element in rotated sorted array ,
// both side about the pivot are sorted in a rotated sorted array
//for no rotated sorted array or n times rotated sorted array , the pivot is the minimum element which is the first element of the array

//algo points :
// we calculate the mid , compare the mid element with end pointer element to check which part(left or right) of the array is sorted or not
// we compare like if(nums[mid]>nums[e]) which is basically a condition if the array is left sorted or not sorted in right.
// if left part sorted , the pivot ieft sorted or right sorted about the mid s in right part (we do s=mid+1 )
// if right part sorted , the pivot is in the left part(we do e=mid)  , e=mid , because if the mid is pivot then doing e=mid-1 makes the pivot skip , and we dont want that
// s stores the pivot elements index after execution of the code
// when the array is sorted but not rotated , the cmparison wont work hence the s remains 0;

// we return nums[s] , element which is the pivot

// quick test cases:
// single element
// double element 
// 1 2 3 4 5 this sorted and its all rotations


