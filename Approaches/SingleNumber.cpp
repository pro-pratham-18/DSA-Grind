#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_unique(vector <int>& v){
    sort(v.begin(),v.end());
    int n=v.size();
    if(n==1){
        return v[0];
    }
    int l=0;
    int r=1;
    while(l<r){
        if(v[l]==v[r] ){
            l+=2;
            if(r<n-2){
                r+=2;
            }
        }
        else{
            return v[l];
        }
    }
    return v[l];
}

int main(){
    vector <int> v={4,5,5,6,6};
    auto x=find_unique(v);
    cout<<x;
    return 0;
}