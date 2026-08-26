#include<iostream>
#include<vector>
#include<climits>
using namespace std;


vector<int> bellman(vector<vector<int>>& edges,int n,int src){
    vector<int>dis(n,INT_MAX);
    dis[src]=0;
    for(int i=0;i<n-1;i++){
        vector<int>temp=dis;
        
        for(auto edge : edges){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];

            if(dis[u]!=INT_MAX && temp[v]>dis[u]+w){
                temp[v]=dis[u]+w;          
            }
        }
        dis=temp;
    }


    for(auto edge : edges){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];

            if(dis[u]!=INT_MAX && dis[v]>dis[u]+w){      
                return {-1};
            }
        }
    
    return dis;

    }

int main(){
    
    return 0;
}