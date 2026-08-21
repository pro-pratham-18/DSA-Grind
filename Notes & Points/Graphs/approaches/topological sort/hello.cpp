#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void topo_sort_dfs(int u,vector<vector<int>>& adj, vector<bool>& vis,stack<int>& s){
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            topo_sort_dfs(v,adj,vis,s);
        }
    }
    s.push(u);
}

int main(){
    vector<vector<int>>adj={{},{},{3},{1},{0,1},{0,2}};
    int n=adj.size();
    vector<bool> vis(n,false);
    stack<int>s;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            topo_sort_dfs(i,adj,vis,s);
        }
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}