//----power of two (1st Way)

// class Solution {
//     public:
//     string to_binary(int n){
//         if(n==0){
//             return "0";
//         }
//         string s;
//         while(n!=0){
//             s.push_back((n&1)+'0');
//             n>>=1;
//         }
//         reverse(s.begin(),s.end());
//         return s;

//     }
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         int count=0;
//         string str=to_binary(n);
//         for(int i:str){
//             if(i=='1'){
//                 count+=1;
//             }
//         }
//         if(count==1){
//             return true;
//         }
//         return false;
        
//     }

// };

//---------------------------------------------2nd way(self)------------------------------------

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         string s;
//         while(n!=0){
//             s.push_back((n&1)+'0');
//             n>>=1;
//         }
//         reverse(s.begin(),s.end());
//         int count=0;
//         for(int i:s){
//             if(i=='1'){
//                 count+=1;
//             }
//         }
//         if(count==1){
//             return true;
//         }
//         return false;
//     }
// };