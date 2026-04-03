// two sum problem 

#include<iostream>
#include<vector>

using namespace std;


vector <int> Two_sum(vector <int>& v,int target){
    int n=v.size();
    int s=0;
    int e=n-1;
    while(s<e){
        int sum=v[s]+v[e];
        if(sum==target){
            return {s+1,e+1};      // to get element no. wise 
        }
        else if(sum>target){
            e--;
        }
        else{
            s++;
        }
    }
    return {};
}
int main(){
    vector <int> v={2,4,5,7};
    vector <int > vec =Two_sum(v,12);
    
    for(int  i=0;i<vec.size();i++){
        cout<<vec.at(i)<<endl;
    }

    return 0;
}

