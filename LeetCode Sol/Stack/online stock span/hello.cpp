//stock span approach 

// #include<iostream>
// #include<vector>
// #include<stack>

// using namespace std;

// vector<int> stockSpan(vector <int> prices){
//     stack<int>st;
//     int n=prices.size();
//     vector <int> nums(n,0);
//     for(int i=0;i<n;i++){
//         while(!st.empty() && prices[st.top()]<=prices[i]){
//             st.pop();
//         }
//         if(st.empty()) nums[i]=-1;
//         else{
//             nums[i]=st.top();
//         }
//         st.push(i);
//     }
//     return nums;
// }

// int main(){
//     vector <int> prices = {100,80,60,70,60,75,85};
//     auto v=stockSpan(prices);
//     for(auto i:v){
//         cout<<i;
//     }
//     return 0;
// }

