#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(int x,vector<int>par){
    if(par[x]==x) return x;
    return par[x]=find(par[x],par);
}

void unionByRank(int a,int b,vector<int>& par,vector<int>& rank){
    int parA=find(a,par);
    int parB=find(b,par);

    // if(parA==parB) return;      no need as we already checking 

    if(rank[parA]==rank[parB]){
        par[parB]=parA;
        rank[parA]++;
    }
    else if(rank[parA] > rank[parB]){
        par[parB]=parA;
    }
    else{
        par[parA]=parB;
    }
}

int kruskal(vector<vector<int>>& edges,int n){       //weigted edges input array
    vector<int>rank(n,0);
    vector<int>par(n,0);
    for(int i=0;i<n;i++){
        par[i]=i;
    }
    int mstCost=0;

    sort(edges.begin(),edges.end(),[](const vector<int>& a,const vector<int>& b){
        return a[2]<b[2];
    });

    for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        int wt=edge[2];

        int parU=find(u,par);
        int parV=find(v,par);

        if(parU!=parV){        // that means now we can select that edge
            unionByRank(u,v,par,rank);
            mstCost+=wt;
        }

    }
}

int main(){
    
    return 0;
}