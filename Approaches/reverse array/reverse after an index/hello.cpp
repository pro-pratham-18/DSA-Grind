#include<iostream>
#include<vector>
using namespace std;

vector <int> rev_arr(vector <int> nums , int x){
    int n=nums.size();
    int s=x+1;                 // considering position is given in the input
    int e=n-1;
    while(s<e){
        swap(nums[s],nums[e]);
        s++;
        e--;
    }
    return nums;
}

int main(){
    vector <int> nums ={1,4,5,7,2,3};
    auto x=rev_arr(nums ,3);
    for(auto k:x){
        cout<<k;
    }
    return 0;
}



