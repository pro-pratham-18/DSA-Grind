#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>

using namespace std;

int lcs_num(vector<int>& nums1 , vector<int>& nums2){
    int n=nums1.size();
    int m=nums2.size();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(nums1[i-1]==nums2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int lis(vector<int>& nums){
    set<int>st(nums.begin(),nums.end());
    vector<int>sortedArr(st.begin(),st.end());

    // if unodered set used

    // unordered_set<int>st(nums.begin(),nums.end());
    // vector<int>sortedArr(st.begin(),st.end());
    // sort(sortedArr.begin(),sortedArr.end());

    return lcs_num(nums,sortedArr);
}

int main(){

    vector<int>nums={1,43,23,19,6,6,9,4};
    cout<<lis(nums);

    return 0;
}