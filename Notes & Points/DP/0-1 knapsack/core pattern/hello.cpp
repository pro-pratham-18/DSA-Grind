#include<iostream>
#include<vector>
using namespace std;

int knapsack(vector<pair<int,int>>& items,int w){
    int n=items.size();
    vector<vector<int>>dp(n+1,vector<int>(w+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            int val=items[i-1].first; 
            int wt=items[i-1].second;

            if(wt<=j){
                dp[i][j]=max(val+dp[i-1][j-wt],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];

}


int main(){
    
    return 0;
}