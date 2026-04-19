


// If you see:
// “check if element exists many times”                          //agar kisi vector me check krna pade ki yeh aa raha hai ya nahi , toh hashing preferred hai 
// 👉 Your brain should scream:
// “HASHING USE KAR!”                                           // ranking for searching       hashmap [o(1)] >binary search [O(logn)] > find method O[(n)]                  


//think of this when checking if an element(nums[i]) is present or not before appending it 
// if(v.empty() || v.back() != nums1[i])


//point sorted array me two pointer acha chalta hai 

//point we have a binary_search in-built function which returns true or false as per the element prsence.

// jab return type vector ka vector ho :

// vector <vevtor<int>> func1(){

// }

//------------------------------------------------------------------------------------------------------------

// when we have to return the indexes , but we made the array/vector sorted for easiness , then the indexes get changed
// to resolve this problem we can use pair , by preserving the original index

// pair declaration :
// vector <pair<int,int>> p;

// just create a copy of the given vector along with its indexes using emplace back
// sort the pair using sort(p.begin(),p.end()); , it will get sorted as per the value      (works for both vector as well as pair)
// to access the value , p[i].first 
// to access the original index , p[i].second
// p[i] to access the pair

//  vector <pair<int,int>> v1;
//         for(int i=0;i<n;i++){
//             v1.emplace_back(nums[i],i);       nums is the imput vector here
//         }
//         sort(v1.begin(),v1.end());

//-----------------------------------------------------------------------------------------------------------------------------




//set work 



//-------------------------------------------------------------------------------------

// in move zeroes , we basically use two pointer which optimal way to sort all the zeroes to either left or right , (as this is the type of II........, we use m<n inside while , where m is the right pointer)
// its another variation is color sort , where we sort 0 1 2 using 3 pointersnd start , middle and end. (dutch flag algorithm)


//---------------------------------------------------------------------------------------------

// if you make pointer of an array , then it points to the first element by default.
// increasing pointer value , increases the memmory address by bytes as per the data type of the element inside the array , and it starts pointing to next element such that the pointer now holds the adress of the second element
//
