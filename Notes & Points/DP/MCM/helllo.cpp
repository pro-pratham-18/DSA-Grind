#include<iostream>
#include<climits>

#include<vector>
using namespace std;

int MCM(vector <int>& nums){
    int n=nums.size();
    vector<vector<int>>dp(n,vector<int>(n,0));

    for(int len=2;len<n;len++){
        for(int i=1;i<=n-len;i++){
            int j=len+i-1;   
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                int cost1=dp[i][k];
                int cost2=dp[k+1][j];
                int ans=cost1+cost2+nums[i-1]*nums[k]*nums[j];
                dp[i][j]=min(dp[i][j],ans);
            }
        }
    }
    return dp[1][n-1];
}

int main(){   
    return 0;
}