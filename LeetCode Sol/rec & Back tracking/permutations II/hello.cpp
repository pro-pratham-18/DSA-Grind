#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


class Solution {
public:
    void pmt(vector<int>& nums,int i,int& n,vector<vector<int>>& ans){ 
        if(i==n){
            ans.push_back(nums);
            return;
        }

        
        unordered_set<int>st; 

        for(int idx=i;idx<n;idx++){
            if(st.find(nums[idx])!=st.end()) continue;

            st.insert(nums[idx]);
            swap(nums[idx],nums[i]);
            pmt(nums,i+1,n,ans);
            swap(nums[idx],nums[i]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        pmt(nums,0,n,ans);
        return ans;
    }
};


int main(){
    
    return 0;
}
