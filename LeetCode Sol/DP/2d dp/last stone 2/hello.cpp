#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        if(n==1) return stones[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=stones[i];
        }
        int target=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(target+1,0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                int wt=stones[i-1];
                if(wt<=j){
                    dp[i][j]=max(wt+dp[i-1][j-wt],dp[i-1][j]); 
                }
                else{
                    dp[i][j]=dp[i-1][j]; 
                }
            }
        }

        int s1=dp[n][target];
        int s2=sum-s1;
        return s2-s1;
    }
};

int main(){
    
    return 0;
}