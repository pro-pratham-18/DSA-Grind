// class Solution {
// public:
//     int swimInWater(vector<vector<int>>& grid) {
//         int n=grid.size();
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
//         pq.push({grid[0][0],{0,0}});

//         vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
//         dist[0][0]=grid[0][0];

//         vector<vector<int>>dirs={{-1,0},{0,1},{1,0},{0,-1}};

//         auto Safe=[&](int i,int j){
//             return i>=0 && j>=0 && i<n && j<n;
//         };

//         while(!pq.empty()){
//             int i=pq.top().second.first;
//             int j=pq.top().second.second;

//             int ele=pq.top().first;

//             pq.pop();

               // optimization

//             if(ele>dist[i][j]) continue;
//             if(i==n-1 && j==n-1) return ele;

//             for(auto &dir : dirs){
//                 int x=i+dir[0];
//                 int y=j+dir[1];

//                 if(Safe(x,y)){
//                     int max_ele=max(ele,grid[x][y]);
//                     if(dist[x][y]>max_ele){
//                         dist[x][y]=max_ele;
//                         pq.push({dist[x][y],{x,y}});
//                     }
//                 }
//             }
//         }
//         return dist[n-1][n-1];
//     }
// };