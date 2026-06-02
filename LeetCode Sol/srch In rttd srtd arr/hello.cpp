#include<iostream>
#include<vector>
using namespace std;

int rs_search(vector <int> v, int target){
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[s]<=v[mid]){
            if(v[s]<=target && target <v[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(v[mid]<target && target <=v[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
    }
    return -1;
}
int main(){
    vector <int> v={2,3,4,5,1};
    cout<<rs_search(v,1);
    return 0;
}