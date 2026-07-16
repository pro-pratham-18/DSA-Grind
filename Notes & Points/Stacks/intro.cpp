#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector <int> nums;
public:
    void pop(){
        if(!nums.empty()){
            nums.pop_back();
        }
    }

    void push(int value){
        nums.push_back(value);
    }

    int top(){
        if(nums.empty()){
            return -1;           // the top will be -1 when there is no element in the stack 
        }
        return nums.back();
    }

    bool empty(){
        return nums.empty();
    }
};

int main(){
    
    return 0;
}
