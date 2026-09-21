#include<iostream>
#include<vector>

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        const int INF=1e9;
        vector<vector<int>>dp(n+1,vector<int>(amount+1,INF));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                int wt=coins[i-1];
                if(wt<=j){
                    dp[i][j]=min(1+dp[i][j-wt],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[n][amount]==INF) return -1;
        return dp[n][amount];
    }
};

using namespace std;

int main(){
    
    return 0;
}




//hello