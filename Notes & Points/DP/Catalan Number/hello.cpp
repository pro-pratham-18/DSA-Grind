#include<iostream>
#include<vector>
using namespace std;

// rrecursion

int cat(int n){
    if(n==0 || n==1) return 1;
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=cat(i)*cat(n-i-1);
    }
    return ans;
}


//tabulation

long long cat_tab(int n){
    if(n==0) return 1;                   // to handle the overflow case of dp[1] at n==0
    vector<long long >dp(n+1,0);         // at n=20 and after that, the catalan number falls in the range of long long not in int
    dp[0]=dp[1]=1; 

    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            dp[i]+=dp[j]*dp[i-j-1];
        }
    }
    return dp[n];
}

int main(){
    
    return 0;
}