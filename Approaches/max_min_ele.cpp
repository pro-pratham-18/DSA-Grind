#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int max_ele(int arr[],int n){                  // max_ele using  Arary 
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    return mx;
}

vector <int> max_eleV(vector <int>& v){           // max_ele using vector , return type can be int as well
    int n=v.size();
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,v.at(i));
    }
    return {mx};
}

int min_ele(int arr[],int n){                  // min_ele using  Arary 
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    return mn;
}

vector <int> min_eleV(vector <int>& v){           // min_ele using vector , return type can be int as well
    int n=v.size();
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        mn=min(mn,v.at(i));
    }
    return {mn};
}

int main(){
    vector <int> v={3,4,5,6,7,9};
    int arr[]={1,2,3,4,9,10,45,8,7};                        
    cout<<max_ele(arr,9)<<endl;
    cout<<max_eleV(v)[0]<<endl;
    cout<<min_ele(arr,9)<<endl;
    cout<<min_eleV(v)[0];

    return 0;
}

