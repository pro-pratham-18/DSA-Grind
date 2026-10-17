#include<iostream>
using namespace std;

int rec_lcs(string& s1 ,string& s2,int n,int m){
    if(n==0|| m==0) return 0;
    if(s1[n-1]==s2[m-1]){
        return 1+rec_lcs(s1,s2,n-1,m-1);
    }
    else{
        int ans1=rec_lcs(s1,s2,n-1,m);
        int ans2=rec_lcs(s1,s2,n,m-1);
        return max(ans1,ans2);
    }
}

int main(){
    string s1="abcdge";
    string s2="abedg";
    int n =s1.length();
    int m =s2.length();
    cout<<rec_lcs(s1,s2,n,m);
    return 0;
}