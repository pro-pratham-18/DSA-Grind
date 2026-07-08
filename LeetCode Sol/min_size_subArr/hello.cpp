
#include<iostream>
#include<vector>
#include<vector>

using namespace std;

// when sum >=target and min length is asked 

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int min_len=n+1;
        int subArr_sum=0;
        for(int right=0;right<n;right++){
            subArr_sum+=nums[right];
            while(subArr_sum>=target){
                int len=right-left+1;
                min_len=min(min_len,len);
                subArr_sum-=nums[left++];
            }
        }
        if(min_len==n+1){
            return 0;
        }
        return min_len;
    }
};

// when sum <= target and max length is asked 


int min_subArr_len(vector <int>& nums , int target){
    int n=nums.size();
    int sub_arr_sum=0;
    int left=0;                // it represents the start of the valid subArray
    int max_len=0;
    for(int right =0;right <n;right++){
        sub_arr_sum+=nums[right];               //ouitside the while , it is the case of sub_arr_sum<=target
        while(sub_arr_sum>target){
            sub_arr_sum-=nums[left++];
        }
        int len=right-left+1;
        max_len=max(max_len,len);
    }
    return max_len;                          // here when the subarray not found , max_len will remain 0;
}


int main(){
    vector <int> nums1={10,20,30};
    vector <int> nums2={ 3,4,2,1};
    cout<<min_subArr_len(nums1,10)<<endl;
    cout<<min_subArr_len(nums1,5)<<endl;
    cout<<min_subArr_len(nums2,7)<<endl;
    return 0;
}





// it can also be modified for the conditions like >target , <target 