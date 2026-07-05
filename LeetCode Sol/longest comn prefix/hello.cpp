
// preferred optimal 

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n=strs.size();
//         sort(strs.begin(),strs.end());

//         string s1=strs[0];
//         int n1=s1.length();

//         string s2=strs[n-1];
//         int n2=s2.length();

//         int n3=min(n1,n2);
//         string s3="";
//         for(int i=0;i<n3;i++){
//             if(s1[i]==s2[i]){
//                 s3+=s1[i];
//             }
//             else{
//                 break;
//             }
//         }
//         return s3;
//     }
// };