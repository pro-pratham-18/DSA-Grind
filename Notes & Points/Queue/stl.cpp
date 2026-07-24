#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(56);
    q.push(57);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}