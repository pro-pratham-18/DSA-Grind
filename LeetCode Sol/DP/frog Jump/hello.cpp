//frog jump

#include<iostream>
#include<vector>
using namespace std;

int jump(vector<int>& nums){
    int n=nums.size();
    if(n==1){
        return 0;
    }
    if(n==2){
        return abs(nums[0]-nums[1]);
    }
    int prev1=0;
    int prev2=abs(nums[0]-nums[1]);
    int curr=prev2;

    for(int i=2;i<n;i++){
        int step1=abs(nums[i]-nums[i-1]);
        int step2=abs(nums[i]-nums[i-2]);

        curr=min(prev1+step2,prev2+step1);
        prev1=prev2;
        prev2=curr;
    }
    return curr;
}

int main(){
    return 0;
}