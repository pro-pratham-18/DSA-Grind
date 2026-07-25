// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int max_area=0;
//         int n=heights.size();
//         stack<int>st;
//         vector <int> left_smaller(n,0);
//         vector <int> right_smaller(n,0);
//         for(int i=0;i<n;i++){
//             while(!st.empty() && heights[st.top()]>=heights[i]){
//                 st.pop();
//             }
//             if(st.empty()) left_smaller[i]=-1;
//             else{
//                 left_smaller[i]=st.top();
//             }
//             st.push(i);        
//         }
//         while (!st.empty()) {
//             st.pop();
//         }
//         for(int i=n-1;i>=0;i--){
//             while(!st.empty() && heights[st.top()]>=heights[i]){
//                 st.pop();
//             }
//             if(st.empty()) right_smaller[i]=n;
//             else{
//                 right_smaller[i]=st.top();
//             }
//             st.push(i);        
//         }
//         for(int i=0;i<n;i++){
//             int width=right_smaller[i]-left_smaller[i]-1;
//             int currArea=heights[i]*width;
//             max_area=max(currArea,max_area);
//         }
//         return max_area;
//     }
// };



#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector <int> next_greater2(vector <int> nums){
    stack <int>st;
    int n=nums.size();
    vector <int> ans(n,-1);
    for(int i=0;i<2*n;i++){
        while(!st.empty() && nums[st.top()]<=nums[i%n]){
            st.pop();
        }
        if(i>=n){
            if(st.empty()){
                ans[i%n]=-1;
            }   
            else{
                ans[i%n]=nums[st.top()];
            }   
        }
        st.push(i%n);
    }
    return ans;
}

int main(){
    
    return 0;
}