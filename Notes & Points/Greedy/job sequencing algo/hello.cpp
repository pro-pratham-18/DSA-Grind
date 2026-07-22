#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int job_sequencing(vector<vector<int,int>>jobs){

    sort(jobs.begin(),jobs.end()),[](const auto & a,const auto & b){
        return a[1].b[1];
    };
    int n=jobs.size();
    int currStart=jobs[0][0];
    int profit=jobs[0][1];
    for(int i=i;i<n;i++){
        if(jobs[i][0]>currStart){
            profit+=jobs[i][1];
            currStart=jobs[i][0];
        }
    }
    return profit;
}

int main(){
    
    return 0;
}