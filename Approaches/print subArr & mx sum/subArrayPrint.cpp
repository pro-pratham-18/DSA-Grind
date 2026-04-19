// triple loop , default brute force (O(n^3)) , preferred

// #include<iostream>
// #include<vector>
// using namespace std;

//  void subarray(vector <int> v){
//     int n=v.size();
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<v[i];
//             }
//             cout<<endl;
//         }
//     }
//
// }




// int main(){
//     vector <int> v={1,2,3,4,5};
//     subarray(v);
//     return 0;
// }


// //--------------------------------------------------------------------------------------------
// optimal o(n) way using kadane's algorithm

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;



// int subarray(vector <int>& v){
//     int max_sum=INT_MIN;
//     int sum=0;
//     for(auto i:v){
//         sum+=i;
//         max_sum=max(max_sum,sum);
//         if(sum<0){
//             sum=0;
//         }
//     }
//     return max_sum;
// }

// int main(){
//     vector <int> v={1,2,3,4,5};
//     auto x=subarray(v);
//     cout<<x;
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------





