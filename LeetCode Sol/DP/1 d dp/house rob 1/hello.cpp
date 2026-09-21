#include<iostream>
#include<vector>
using namespace std;


//without space optimized
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[n-1];
    }
};


//with optimized space (preferred)

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        int prev1=nums[0];
        int prev2=max(nums[0],nums[1]);
        int curr=prev2;
        
        for(int i=2;i<n;i++){
            curr =max(prev1+nums[i],prev2);
            prev1=prev2;
            prev2=curr;
        }
        return curr;
    }
};


int main(){
    
    return 0;
}