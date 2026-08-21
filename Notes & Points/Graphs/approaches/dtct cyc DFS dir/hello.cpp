#include<iostream>
#include<vector>
using namespace std;

bool detect_cycle(int u,vector<vector<int>>& adj,vector<bool>& vis,vector<bool>& rec){
    vis[u]=true;
    rec[u]=true;
    for(auto v:adj[u]){ 
        if(!vis[v]){
            if(detect_cycle(v,adj,vis,rec)) return true;
        }
        else{
            if(rec[v]) return true;
        } 
    }
    rec[u]=false;
    return false;
}

int main(){
    
    return 0;
}