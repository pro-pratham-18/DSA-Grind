#include<iostream>
#include<vector>
using namespace std;


//print sum of n natural numbers

int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);
}

//fibonaccii                       here the first element of fibo starts from n=0
// program to give n+1 th fibonacci sequence number
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibo(n-1)+fibo(n-2);
}


//check if array is sorted 
bool isSorted(vector<int>& arr,int n){
    if(n==1 || n==0) return true;
    if(arr[n-1]>=arr[n-2] && isSorted(arr,n-1)){
        return true;
    }
    else{
        return false;
    }
}

//binary search using recursion (bool return )
bool binary_search(vector<int>& arr,int s,int e,int x){
    if(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            return true;
        }
        else if(arr[mid]<x){
            return binary_search(arr,mid+1,e,x);
        }
        else{
            return binary_search(arr,s,mid-1,x);
        }
    }
    return false;
}

//binary search using recursion (index return )
int binary_search2(vector<int>& arr,int s,int e,int x){
    if(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            return binary_search2(arr,mid+1,e,x);
        }
        else{
            return binary_search2(arr,s,mid-1,x);
        }
    }
    return -1;
}


int main(){
    
    return 0;
}