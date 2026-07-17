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
