//in this we calculate the next greater element in the circular array 

//best optimal

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector <int> next_greater2(vector <int> nums){
    stack <int>st;
    int n=nums.size();
    vector <int> ans(n,-1);
    for(int i=0;i<2*n;i++){
        while(!st.empty() && nums[st.top()]<=nums[i%n]){
            st.pop();
        }
        if(i>=n){
            if(st.empty()){
                ans[i%n]=-1;
            }   
            else{
                ans[i%n]=nums[st.top()];
            }   
        }
        st.push(i%n);
    }
    return ans;
}

int main(){
    
    return 0;
}