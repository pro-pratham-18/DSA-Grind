#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
public:
    int V;
    vector<vector<int>>adj;

    Graph(int vtx){
        V=vtx;
        adj.resize(vtx);
    }

    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

};

//bfs traversal function (non class member function / LC )

void bfs(int n,vector<vector<int>>&edges){
    vector<vector<int>>adj(n);

    // way to convert the edges vector to the adjacency vector 
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool>vis(n,false);
    queue<int>q;
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u;
        for(int v:adj[u]){
            if(!vis[v]){
                vis[v]=true;
                q.push(v);
            }
        }
    }
}

// dfs traversal (non class member function / LC )

void dfs(int u,vector<bool>& vis,vector<vector<int>>& adj){   
    cout<<u;
    vis[u]=true;
    for(int v :adj[u]){
        if(!vis[v]){
            dfs(v,vis,adj);
        }
    }
}

int main(){

    return 0;
}