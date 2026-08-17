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
        adj[v].push_back(u);           // dont write this second line in case  of the directed graph
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

// helper function to create the adjacency list from the edges list
void helper(vector<vector<int>>& edges,vector<vector<int>>& adj){
    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];

        adj[u].push_back(v);
        adj[v].push_back(u);         
    }
}

//dfs/bfs trav for the disconnected graph


//when calling the dfs function for graph along with the source element, in a loop check for every element if it is visited or not , if not then call the dfs function such that , that unvisited element will act as the source element now.
//whenever the element is unvisted , applying the dfs function on it as a source elment will traverse that entire disconnected graph


//dfs dfs traversal for the disconnected graphs

void dfs_trav_dis(int n , vector<vector<int>>& edges){
    vector<vector<int>>adj(n);
    vector<bool>vis(n,false);
    helper(edges,adj);                 //this will make the ajacency list;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,vis,adj);
        }
    }

}

// disconnected graph bfs traversal


void bfs(int s, vector<vector<int>>& adj,vector<bool>& vis){
    queue<int>q;
    q.push(s);
    vis[s]=true;
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

void bfs_trav_dis(int n,vector<vector<int>>& edges){
    vector<vector<int>>adj(n);
    vector<bool>vis(n,false);
    helper(edges,adj);        //  this function will crete the adjacency list
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bfs(i,adj,vis);
        }
    }
}


int main(){

    return 0;
}
