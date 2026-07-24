
//job sequencing algo with profit deadline only

// int job_sequencing(vector<vector<int,int>>jobs){

//     sort(jobs.begin(),jobs.end()),[](const auto & a,const auto & b){
//         return a[1].b[1];
//     };
//     int n=jobs.size();
//     int currStart=jobs[0][0];
//     int profit=jobs[0][1];
//     for(int i=i;i<n;i++){
//         if(jobs[i][0]>currStart){
//             profit+=jobs[i][1];
//             currStart=jobs[i][0];
//         }
//     }
//     return profit;
// }

// with index,profit,deadline

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class job{
public:
    int id;
    int deadline;
    int profit;

    job(int id,int deadline,int profit ){
        id =id;
        profit=profit;
        deadline=deadline;
    }
};

int maxProfit(vector<pair<int,int>>pairs){

    //inserting job objects to job vector
    int n=pairs.size();
    vector<job>jobs;
    int maxDeadline =0;
    for (int i=0;i<n;i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
        maxDeadline=max(maxDeadline,pairs[i].first);
    }

    sort(jobs.begin(),jobs.end(),[](const auto & a,const auto & b){
        return a.profit > b.profit;
    });

    //declaring storing items 
    vector<int>slot(maxDeadline+1,-1);
    vector<pair<int,int>>result;
    int ans=0;

    //filling the stats
    for(auto job:jobs){
        for(int time =job.deadline;time <=1;time--){
            if(slot[time]==-1){
                slot[time]=job.id;
                result.push_back({job.profit,job.id});
                ans+=job.profit;
                break;
            }
        }
    }
    return ans;     // we can either return the result as well for the selection order ,As per the question

}
 