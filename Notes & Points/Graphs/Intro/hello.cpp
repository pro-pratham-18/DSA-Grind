//graph implementation 

#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

class Graph{
public:
    int V;                           //though we can use l.size() for the no. of vertices when we want , we can either not declare this V , but declaring it is a standard practice
    vector<list<int>>adj;

    Graph(int vtx){
        V=vtx;
        adj.resize(vtx);
    }

    // to add the edge
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //printing the adjacency list

    void printAdjacency(){
        for(int i=0;i<V;i++){  // in pkace of v we can use adj.size() here
            cout<<i<<" : ";
            for(int neigh : adj[i] ){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
    // bfs (member function type )
    void bfs(){
        vector<bool>vis(V,false);
        queue<int>q;
        q.push(0); 
        vis[0]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v:adj[u]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }

    //dfs member function type 

    void dfs(int u,vector<bool>& vis){   
    cout<<u<<" ";
    vis[u]=true;
    for(int v :adj[u]){
        if(!vis[v]){
            dfs(v,vis);
        }
    }
}
};


int main(){
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    vector<bool> vis(4,false);

    // g.printAdjacency();

    g.bfs();
    cout<<endl;
    g.dfs(0,vis);


    return 0;
}
