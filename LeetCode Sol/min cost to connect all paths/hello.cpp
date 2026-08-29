// by creating edges array of all possible path , and applying kruskal algo over it

// class Solution {
// public:
//     int find(int x,vector<int>& par){
//         if(par[x]==x) return x;
//         return par[x]=find(par[x],par);
//     }

//     void unionByrank(int a ,int b,vector<int>& rank,vector<int>& par){
//         int parA=find(a,par);
//         int parB=find(b,par);
//         if(rank[parA]==rank[parB]){
//             par[parB]=parA;
//             rank[parA]++;
//         }
//         else if(rank[parA] > rank[parB]){
//             par[parB]=parA;
//         }
//         else{
//             par[parA]=parB;
//         }
//     }
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n=points.size();
//         vector<vector<int>>edges;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int x=abs(points[j][0]-points[i][0]);
//                 int y=abs(points[j][1]-points[i][1]);
//                 int dis=x+y;
//                 edges.push_back({i,j,dis});
//             }
//         }

//         vector<int>rank(n,0);
//         vector<int>par(n,0);
//         for(int i=0;i<n;i++){
//             par[i]=i;
//         }

//         sort(edges.begin(),edges.end(),[](const vector<int>& a,const vector<int>& b){
//             return a[2]<b[2];
//         });

//         int mstCount=0;

//         for(auto edge:edges){
//             int u=edge[0];
//             int v=edge[1];
//             int w=edge[2];

//             int parU=find(u,par);
//             int parV=find(v,par);

//             if(parU!=parV){
//                 mstCount+=w;
//                 unionByrank(u,v,rank,par);
//             }
//         }
//         return mstCount;
//     }
// };

//preferred optimal                                          

// by making adj lit of all possible edges and applying prims algo over it



