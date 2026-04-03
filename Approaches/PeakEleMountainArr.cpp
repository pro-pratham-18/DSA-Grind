// peak element in mountain array by binary search

#include<iostream>
#include<vector>
using namespace std;


int mountain_peak(vector <int> arr){
    int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                e=mid-1;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
        }
}

int main(){
    vector <int> v={2,4,6,7,8,3,1,};
    cout<<mountain_peak(v);
    return 0;
}
