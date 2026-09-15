#include<iostream>
#include<vector>
using namespace std;

// fibonacii using dp (bottom-up/iteraive/tabulation)

int fibo(int n){
    if(n<=1) return n;
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

//fibonacii using dp(top-down/recursive/memoization)

int fiboRec(int n,vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fiboRec(n-1,dp)+fiboRec(n-2,dp);
}
int main(){
    int n=8;
    vector<int>dp(n+1,-1);
    cout<< fiboRec(n,dp);
    cout<< fibo(n);
    return 0;
}