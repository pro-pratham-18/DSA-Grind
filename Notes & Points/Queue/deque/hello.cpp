#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
  
    dq.push_front(4);
    dq.push_front(4);
    dq.push_front(4);
    dq.push_front(4);

    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;
    return 0;
}