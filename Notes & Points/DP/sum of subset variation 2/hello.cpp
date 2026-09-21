#include<iostream>
#include<vector>


using namespace std;

int sum_of_subset(vector<int>& nums,int& target){
    int n=nums.size();
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));

    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            int wt=nums[i-1];
            if(wt<=j){
                dp[i][j]=dp[i-1][j-wt]+dp[i-1][j];
            }
            else{
                dp[i][j]=(dp[i-1][j]);
            }
        }
    }

    return dp[n][target];

}

int main(){
    
    return 0;
}