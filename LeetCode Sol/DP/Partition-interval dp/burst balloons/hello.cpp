#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>


using namespace std;
 

int burst_balloons(vector<int>& nums){
    nums.insert(nums.begin(),1);
    nums.push_back(1);

    
    int n=nums.size();
    vector<vector<int>>dp(n,vector<int>(n,0));

    for(int i=1;i<n-1;i++){
        dp[i][i]=nums[i-1]*nums[i]*nums[i+1];
    }
    for(int len=2;len<n-1;len++){
        for(int i=1;i<n-len;i++){
            int j=len+i-1;
            for(int k=i;k<=j;k++){
                int cost=dp[i][k-1]+dp[k+1][j]+nums[i-1]*nums[k]*nums[j+1];
                dp[i][j]=max(dp[i][j],cost);
            }
        } 
    }
    return dp[1][n-2];

}

int main(){
    
    return 0;
}