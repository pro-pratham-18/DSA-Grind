
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

//implementation

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