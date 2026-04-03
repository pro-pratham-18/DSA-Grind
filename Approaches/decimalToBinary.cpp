// standard decimal to binary method

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string to_binary(int n){
    if(n==0){
        return "0";
    }
    string s;
    while(n!=0){
        s.push_back((n&1)+'0'); //lst bit
        n>>=1;             //right shift
    }
    reverse(s.begin(),s.end());  //reverse
    return s; 
}

// standard binary to decimal method
int to_decimal(string s){
    if(s=="0"){
        return 0;
    }
    int count=0;
    int n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            count+=(1<<(n-i-1));
        }
    }
    return count;
}
int main(){
    cout<<to_binary(56)<<endl;
    cout<<to_decimal("1001");
    return 0;
}
