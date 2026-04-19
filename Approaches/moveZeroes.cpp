
// two pointer approach 1st form

// #include<iostream>
// #include<vector>
// using namespace std;

// vector <int> move_zeroes(vector <int> v){
//     int n =v.size();
//     int start=0;
//     for(int i=0;i<n;i++){
//         if(v[i]!=0){
//             swap(v[i],v[start]);
//             start+=1;
//         }
//     }
//     return v;
// }

// int main(){
//     vector <int> v={4,0,0,5,0,2,0};
//     auto x=move_zeroes(v);
//     for(auto i :x){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// two pointer approach 2nd form 

#include<iostream>
#include<vector>
using namespace std;

vector <int> move_zeroes(vector <int> v){
    int n =v.size();
    int s=0;
    int m=0;
    while(m<n){
        if(v[m]==0){
            swap(v[m],v[s]) ;
            s++;
            m++;
        }
        else{
            m++;
        }
    }
    return v;
}
int main(){
    vector <int> v={4,0,0,5,0,2,0};
    auto x=move_zeroes(v);
    for(auto i :x){
        cout<<i<<" ";
    }
    return 0;
}

