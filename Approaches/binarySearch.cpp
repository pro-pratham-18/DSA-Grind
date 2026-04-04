// binary search

#include<iostream>
using namespace std;

void binary_search(int arr[],int n, int x){
        int s=0;
        int e=n-1;
        int found=false;


        while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            cout<<arr[mid];
            found=true;
            break;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        }

        if(found==false){
            cout<<"Element Not Found";
        }
    }
int main(){
    int arr[]={4,5,6,7,8,9};
    binary_search(arr,6,7);
    return 0;
}

//return type can be changed , void(if printing using cout ) , int(  return mid(when found) , return -1 (when not found)), boolean (return true(when found), return false(when not found ) )

// it is basically a two pointer approch 
// left pointer at starting right pointer at the end 