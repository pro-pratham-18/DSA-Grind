#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// dfs  cycle detection

bool dfs(int u,vector<vector<int>>& adj,vector<bool>& vis,int par){
    vis[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            if(dfs(v,adj,vis,u)) return true;
        }
        else{
            if(v!=par) return true;
        }
    }
    return false;
}

// bfs cycle detection 


bool bfs(int src,vector<vector<int>>& adj,vector<bool>& vis){
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty()){
        int u=q.front().first;
        int par=q.front().second;

        for(int v:adj[u]){
            if(!vis[v]){
                vis[v]=true;
                q.push({v,u});
            }
            else{
                if(v!=par){
                    return true;
                }
            }
        }
        return false;
    }
}

// dfs , cycle detection dir 

bool dfs(int u,vector<vector<int>>& adj ,vector<bool>& vis,vector<bool>& rec){
    vis[u]=true;
    rec[u]=true;
    for(int v:adj[u]){
        if(!vis[v]){
            if(dfs(v,adj,vis,rec)) return true;
        }
        else{
            if(rec[v]) return true ;
        }
    }
    rec[u]=false;
    return false;
}



int main(){

    return 0;
}