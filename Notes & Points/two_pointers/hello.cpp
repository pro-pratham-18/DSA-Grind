//when the pointer are in a type where left pointer starts from the first position and right pointer from the 2nd position , and they move by doing +1 on both till array end , and if there is no chance of meeting ,then make the while conidtion like r<n to reduce out of bound 


//when we want to compare two sorted arrays element wise , then we can use two pointer where there are two pointers , one at starting of 1st array and other at starting of second array (like in finding intersection of two sorted arrays , if elements equal , append it to vector and increse both pointer , if lesser or graeter adjust any pointer in right direction to compensate  )
// here , i=0,j=0, while(i<n && j<m)  n and m are the size of the array 
// if(v.empty() || v.back() != nums1[i]) , if requiired us it to check if the lement you are appending(nums[i]) is already present or not  (only incase the element is present at last when the insertion is getting done in sorted order)



//

// ways: a

// I I ......

// I........I

// I.........
// I.........

// and more