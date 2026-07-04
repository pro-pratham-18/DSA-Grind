#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArrSum_equalsK(vector <int> nums,int k){
    int n = nums.size();
    int count =0;
    vector <int> prefix_sum(n);
    unordered_map<int,int> mp;
    prefix_sum[0]=nums[0];
    for(int i=0;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+nums[i];
    }
    for(int i=0;i<n;i++){
        if(prefix_sum[i]==k){
            count++;
        }
        int val = nums[i]-k;
        if(mp.find(val)!=mp.end()){
            count+=mp[val];
        }
        mp[nums[i]]++;
    }
    return count;
}

int main(){
    return 0;
}
