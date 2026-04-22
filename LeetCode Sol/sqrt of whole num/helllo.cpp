// two brute force ways :

//m1
// class Solution {
// public:
//     int mySqrt(int x) {
//         vector <int> p;
//         for(long long i=0;i*i<=x;i++){
//             p.push_back(i*i);
//         }
//         int n=p.size();
//         return n-1;
//     }
// };


//m2


// class Solution {
// public:
//     int mySqrt(int x) {
//         long long s=0;
//         while(s*s<=x){
//             s++;
//         }
//         return s-1;
//     }
// };

// optimal preferred TC - logn 

// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x<2){
//             return x;
//         }
//         long long  ans=0;
//         long long s=1;
//         long long e=x/2;
//         while(s<=e){
//             long long mid=s+(e-s)/2;
//             if(mid<=x/mid){
//                 ans=mid;
//                 s=mid+1;
//             }
//             else{
//                 e=mid-1;
//             }
//         }
//         return ans;
//     }
// };

