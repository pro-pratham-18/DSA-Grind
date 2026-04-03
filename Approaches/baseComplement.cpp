#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> to_binary(int x){
    if(x==0){
        return {0};
    }
    vector <int> v;
    while(x>0){
        int y=x%2;
        v.push_back(y);
        x=x/2;
    }
    reverse(v.begin(),v.end());
    return v;
}

int to_decimal(vector <int> v){
    int count =0;
    int n=v.size();
    for(int i=0;i<n;i++){
        count+=v[i]*(1<<(n-i-1));
    }
    return count;

}
    int bitwiseComplement(int n) {
    vector <int> v1=to_binary(n);
    for(int i=0;i<v1.size();i++){
        if(v1[i]==0) v1[i]=1;
        else{v1[i]=0;}
    }
    return to_decimal(v1);
}

int main(){ 
    cout<<bitwiseComplement(56);
    return 0;
}