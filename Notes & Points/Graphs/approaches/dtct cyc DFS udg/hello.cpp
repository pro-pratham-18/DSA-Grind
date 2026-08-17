
#include<iostream>
#include<vector>
#include<iostream>
using namespace std;


void helper(vector<vector<int>>& edges,vector<vector<int>>& adj){
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);       
    }
}

bool cycle_detectDFS(int u,vector<vector<int>>& adj, vector<bool>& vis,int par){
    cout<<u;
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            if(cycle_detectDFS(v,adj,vis,u)) return true;
        }
        else{
            if(v!=par) return true;
        }
    }
    return false;
}

bool cycle_detectDFS(int u,vector<vector<int>>& adj,vector<bool>& vis,int par){
    cout<<u;
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            if(cycle_detectDFS(v,adj,vis,u)) return true;
        }
        else{
            if(v!=par){
                return true;
            }
        }
    }
}


bool detect_cyc(int src,int n,vector<vector<int>>& edges){
    int par=-1; 
    vector<bool>vis(n,false);
    vector<vector<int>>adj(n);
    helper(edges,adj);
    return cycle_detectDFS(src,adj,vis,par);
}

int main(){
    
    return 0;
}



bool detect_cycle(int u,vector<vector<int>>& adj,vector<bool>& vis, int par ){
    cout<<u;
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            if(detect_cycle(v,adj,vis,u)) return true;
        }
        else{
            if(v!=par) return true;
        }
    }
    return false;
}