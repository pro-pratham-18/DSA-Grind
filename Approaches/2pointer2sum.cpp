// two sum problem 

#include<iostream>
#include<vector>
using namespace std;

vector <int> two_sum(vector <int>& v,int target){
    int n=v.size();
    bool found =false;
    int s=0;
    int e=n-1;
    while(s<e){
        int sum=v.at(s)+v.at(e);
        if(sum==target){
            found =true;
            return {s,e};
            break;
        }
        else if(sum<target){
            s++;
        }
        else{
            e--;
        }
    }
    if(found==false){
        cout<<"Not Found"<<endl;
    }
    return{-1};
}

int main(){
    vector <int> v={2,5,6,10,12,21,30,34,50};
    auto x=two_sum(v,103);                     // to make it run check for 44(10+34)
    for(auto i:x){
        cout<<i<<endl;
    }

}