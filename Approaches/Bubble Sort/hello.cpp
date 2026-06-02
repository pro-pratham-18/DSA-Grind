// #include<iostream>
// #include<vector>
// using namespace std;

// vector <int> bubble_sort(vector <int> v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         bool swapped=false;
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//                 swapped=true;
//             }

//         }
//         if(!swapped){                  //if array gets sorted , then the loop breaks , which reduces some number of iterations
//             break;   
//         }
//     }
//     return v;
// }


// int main(){
//     vector <int> v={1,5,3,2,9,4};
//     auto x=bubble_sort(v);
//     for(auto y:x){
//         cout<<y;
//     }
//     return 0;
// }


// in bubble sort we basically compare pair of element if lesser then swap it with other 
// doing this first time , correctly adjusts the position of the largest element , at the end
// doing this 2nd time , corectly adjusts the position of the second largest element in the array
// we will do this n-1 times , 0 to n-1;
// and as end element gets sorted , we reduxe the size of the second loop from the end, run it from 0 to n-i-1

//if not even a single swapping occurs , that means the array is already sorted, the swapped remains false , hence the loop breaks and the already sorted array is returned 

