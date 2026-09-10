#include<iostream>
#include<vector>

//standard

class Solution {
public:
    void sum(int i,vector<int>& candidates,vector<int>& combi,vector<vector<int>>& ans,int tar,int n){
        if(i==n || tar<0){
            return;
        }
        if(tar==0){
            ans.push_back(combi);
            return;
        }
        combi.push_back(candidates[i]);
        sum(i,candidates,combi,ans,tar-candidates[i],n);
        combi.pop_back();
        sum(i+1,candidates,combi,ans,tar,n);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        int n=candidates.size();
        sum(0,candidates,combi,ans,target,n);
        return ans;
    }
};

// using direct sum   (more intuitive , can be preferred)
class Solution {
public:
    void sum(int i,vector<int>& candidates,vector<int>& combi,vector<vector<int>>& ans,int& tar,int n,int & csum){
        
        if(i==n || csum>tar){
            return;
        }
        if(csum==tar){
            ans.push_back(combi);
            return;
        }
        csum+=candidates[i]; 
        combi.push_back(candidates[i]);

        sum(i,candidates,combi,ans,tar,n,csum);

        csum-=candidates[i];
        combi.pop_back();

        sum(i+1,candidates,combi,ans,tar,n,csum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int csum=0;
        vector<int> combi;
        int n=candidates.size();
        sum(0,candidates,combi,ans,target,n,csum);
        return ans;
    }
};


using namespace std;

int main(){
    
    return 0;
}