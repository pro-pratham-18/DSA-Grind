#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool dfs(int u,vector<vector<int>>& graph,vector<int>& color,int currColor){
        color[u]=currColor;
        for(int v:graph[u]){
            if(color[v]==color[u]) return false; 
            if(color[v]==-1){
                int vColor=1-color[u];
                if(!dfs(v,graph,color,vColor)) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!dfs(i,graph,color,0)) return false;
            }
        }
        return true;
    }
};

int main(){
    
    return 0;
}