#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void cs(int i,vector<vector<int>>& ans,vector<int>& combi,vector<int>& nums,int& k, int tar,int &s){
        if(tar==0 && combi.size()==k){
            ans.push_back(combi);
            return;
        }
        for(int idx=i;idx<s;idx++){
            if(nums[idx]>tar) break;
            combi.push_back(nums[idx]);
            cs(idx+1,ans,combi,nums,k,tar-nums[idx],s);
            combi.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        int s=9;
        vector<vector<int>> ans;
        vector<int>combi;
        cs(0,ans,combi,nums,k,n,s);
        return ans;
    }
};

int main(){
    
    return 0;
}