// binary search first and last occurence code;

#include<iostream>
#include<vector>
using namespace std;

int first_occ(vector <int> v,int x){
    int ans=-1;
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==x){
            ans=mid;
            e=mid-1;
        }
        else if(v[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}




int last_occ(vector <int> v,int x){
    int ans=-1;
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==x){
            ans=mid;
            s=mid+1;
        }
        else if(v[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;

}

vector <int> first_last_occ(vector <int> v,int x){
    return {first_occ(v,x),last_occ(v,x)};
}


int main(){
    vector <int> v ={1,2,3,3,3,3,3,5,6,7};
    vector <int> v1 =first_last_occ(v,3);
    cout<<"total number of occurences are"<<v1[1]-v1[0]+1<<endl;
    int b=v1[1]-v1[0]+1;
    cout<<"all occurences indexes are:"<<endl;
    for(int i=v1[0];i<=v1[1];i++){
        cout<<i;
    }
    return 0;
}


