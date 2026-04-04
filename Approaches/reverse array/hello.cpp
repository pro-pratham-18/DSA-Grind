
//swapping is used for reversing an array

#include<iostream>
#include<vector>

using namespace std;

vector <int> reverse_arr(vector <int>& v){
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<e){                        // prefer s<e to avoid the self swap
        swap(v[s],v[e]);
        s+=1;
        e-=1;
    }
    return v;                           // when returning something isnt necessary ,instead of returning v we can make it void as well , then we can use this function to change the actual vector , and then printing the actual vector 
}

int main(){
    vector <int> v={1,2,4,5,6};
    auto x=reverse_arr(v);
    cout<<"{";
    for(int x:v){
        cout<<x<<",";
    }
    cout<<"}";
    return 0;
}