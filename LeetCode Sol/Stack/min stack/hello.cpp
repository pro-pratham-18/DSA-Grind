
// using pair (lc solution)

// class MinStack {
// public:
//     stack <pair <int,int>>st;
//     MinStack(){
//     }
//     void push(int value) {
//         if(st.empty()){
//             st.push({value,value});
//         }
//         else{
//             int minval=min(value,st.top().second);
//             st.push({value,minval});
//         }
//     }
//     void pop() {
//         st.pop();
//     }

//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };

//implementation using pair 

#include<iostream>
#include<stack>
using namespace std;

class MinStack{
    public:
        stack<pair<int,int>>st;
    MinStack (){

    }

    void push(int value){
        if(st.empty()){
            st.push({value,value});
        }
        else{
            int minval=min(value,st.top().second);
            st.push({value,minval});
        }
    }

    void pop(){
        st.pop();
    }
    int top(){
        return st.top().first;
    }
    int getMin(){
        return st.top().second;
    }
};

int main(){
    MinStack*s1=new MinStack();   //pointer 
    s1->push(5);                  
    s1->push(6);                  
    s1->push(7);                  
    s1->pop();                  
    s1->push(-5); 
    cout<<s1->getMin();                 

    return 0;
}


// lc solution ,preferred optimal (using stack only)


class MinStack {
public:
    int minVal;
    stack<long long >st;
    MinStack() {

    }
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minVal=value;
        }
        else if(value<minVal){
            long long val=2LL*value-minVal;
            st.push(val);
            minVal=value;
        }
        else{
            st.push(value);
        }
    }
    void pop() {
        if(st.top()<minVal){
            minVal=2LL*minVal-st.top();
        }
        st.pop();
    }
    int top() {
        if(st.top()<minVal){
            return minVal;
        }
        return st.top();
    }
    
    int getMin() {
        return minVal;
    }
}; 
