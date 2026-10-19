#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int minCost_stick(vector<int>& cuts,int& n){
    cuts.push_back(0);
    cuts.push_back(n);

    int s=cuts.size();
    sort(cuts.begin(),cuts.end());
   
    vector<vector<int>>dp(s,vector<int>(s,0));

    for(int len=2;len<s;len++){
        for(int i=0;i<s-len;i++){
            int j=i+len;
            dp[i][j]=INT_MAX;
            for(int k=i+1;k<j;k++){
                dp[i][j]=min(dp[i][j],cuts[j]-cuts[i]+dp[i][k]+dp[k][j]);
            }
        }
    }

    return dp[0][s-1];

}

int main(){
    
    return 0;
}