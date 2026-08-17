#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void helper(vector<vector<int>>& edges,vector<vector<int>>& adj){
    for(auto edge : edges){
        int u=edge[0];
        int v=edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

bool bfs(vector<vector<int>>& adj,vector<bool>& vis){   //s is the starting element 
    queue<pair<int,int>>q;
    q.push({0,-1});
    vis[0]=true;
    while(!q.empty()){
        auto u=q.front();
        q.pop();
        for(int v:adj[u.first]){
            if(!vis[v]){
                vis[v]=true;
                q.push({v,u.first});
            }
            else{
                if(v!=u.second) return true ;
            }
        }
    }
    return false ;
}

bool detect_cyc(int n ,vector<vector<int>>& edges){
    vector<vector<int>>adj(n);
    vector<bool> vis(n,false);
    helper(edges,adj);
    return bfs(adj,vis);
}

int main(){
    
    return 0;
}