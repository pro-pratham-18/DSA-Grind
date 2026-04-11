//3 sum

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


vector <vector<int>> three_sum(vector <int> v){
    sort(v.begin(),v.end());
    vector <vector<int>> v1;
    int n=v.size();
    for(int i=0;i<n;i++){
        int s=i+1;
        int e=n-1;

        if(i>0 && v[i]==v[i-1]) continue;

        while(s<e){
            int sum=v[i]+v[s]+v[e];
            if(sum==0){
                v1.push_back({v[i],v[s],v[e]});
                s++;
                e--;
                while(s<e && v[s]==v[s-1]) s++;
                while(s < e && v[e] ==v[e+1]) e--;
            }
            else if(sum<0){
                s++;
            }
            else{
                e--;
            }
        }
    }
    return v1;
}
int main(){
    vector <int> v={-1,0,1,2,-1,-4};
    auto x=three_sum(v);
    for(auto i:x){
        for(auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


