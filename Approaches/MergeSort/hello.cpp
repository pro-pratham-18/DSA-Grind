#include<iostream>
#include<vector>
using namespace std;

void merge(vector <int>& nums ,int s,int mid ,int e){
    vector <int> temp;
    int i=s;
    int j=mid+1;
    while(i<=mid && j<=e){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(nums[j]);
        j++;
    }

    for(int i=0;i<temp.size();i++){
        nums[s+i]=temp[i];
    }

}

void mergeSort(vector <int>& nums,int s,int e){
    if(s<e){
        int mid=s+(e-s)/2;
        mergeSort(nums,s,mid);         // left
        mergeSort(nums,mid+1,e);       // right 
        merge(nums,s,mid,e);

    }
}

int main(){
    vector <int> nums={2,90,37,4,22,0,1,18};
    int n=nums.size();
    mergeSort(nums,0,n-1);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}




