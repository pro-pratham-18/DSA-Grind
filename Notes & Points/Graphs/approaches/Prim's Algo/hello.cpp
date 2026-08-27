

// for minCOst Only


#include<iostream>
#include<tuple>
#include<vector>
#include<queue>
#include<functional>                               // for greater int , though it works without it as well
using namespace std;

int Prims_MinCOst(vector<vector<pair<int,int>>> adj,int src){

    
    int n=adj.size();
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    int minCost=0;

    pq.push({0,src});

    vector<bool>vis(n,false);

    while(!pq.empty()){
        int u=pq.top().second;
        int uwt=pq.top().first;

        pq.pop();

        if(!vis[u]){
            vis[u]=true;
            minCost+=uwt;

            for(auto p:adj[u]){
                int v=p.first;
                int vwt=p.second;

                if(!vis[v]){
                    pq.push({vwt,v});
                }
            }
        }
    }
    return minCost;

}

//function for edge Array 
//the edge array represent the sequeunce of the edge selection in the prims algo




vector<pair<int,int>> Prims_MstEdges(vector<vector<pair<int,int>>> adj,int src){

    int n=adj.size();

    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>pq;

    vector<pair<int,int>> mstEdges;
    

    pq.push({0,src,-1});

    vector<bool>vis(n,false);
    while(!pq.empty()){

        auto top = pq.top();

        // int uwt = get<0>(top);    we use it in minCost
        int u = get<1>(top);
        int parent = get<2>(top);

        pq.pop();


        if(!vis[u]){
            vis[u]=true;
            if(parent!=-1){
                mstEdges.push_back({parent,u});
            }
            for(auto p:adj[u]){
                int v=p.first;
                int vwt=p.second;

                if(!vis[v]){
                    pq.push({vwt,v,u});
                }
            }
        }
    }
    return mstEdges;

}


int main(){
    
    return 0;
}