// class Solution {
// public:
//     void dfs(int u,vector<bool>& vis,vector<vector<int>>& isConnected,int n){
//         vis[u]=true;
//         for(int v=0;v<n;v++){
//             if(isConnected[u][v]==1 && !vis[v]){
//                 dfs(v,vis,isConnected,n);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int prov=0;
//         int n=isConnected.size();
//         vector<bool>vis(n,false);
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 dfs(i,vis,isConnected,n);
//                 prov+=1;
//             }
//         }
//         return prov;
//     }
// };