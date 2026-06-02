#include<iostream> 
#include<vector>

using namespace std;

// function for insertion sort
vector <int> ins_sort(vector  <int> nums){
    int n=nums.size();
    for (int i=1; i<n; i++){
        int curr=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>curr){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=curr;
    }
    return nums;
}

