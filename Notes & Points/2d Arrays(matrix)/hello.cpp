#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int m[4][4];
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            m[i][j]=k;
            k++;
        }
    }

    for(int i =0;i<4;i++){                    // for column wise iteration just i and j in m[i][j] , and there end values as well;
        for(int j=0;j<4;j++){
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

    // max column sum 
    int Max_sum=INT_MIN;
    for(int i=0;i<4;i++){                      
        int curr_sum=0;
        for(int j=0;j<4;j++){
            curr_sum+=m[j][i];
        }
        Max_sum=max(Max_sum,curr_sum);
    }
    cout<<"Max Column Sum :"<<Max_sum<<endl;
    
    // max row sum 
    int Max_sum_row=INT_MIN;
    for(int i=0;i<4;i++){
        int curr_sum=0;
        for(int j=0;j<4;j++){
            curr_sum+=m[i][j];
        }
        Max_sum_row=max(Max_sum_row,curr_sum);
    }
    cout<<"Max Row Sum :"<<Max_sum_row<<endl;

    //diagonal sum 

    int count=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                count+=m[i][j];
            }
            else if(j==3-i) {
                count+=m[i][j];  // if(j==n-i-1)
            }                     
        }
    }
    cout<<"Diagonal Sum:"<<count;

    //diagonal sum shortcut
    
    int cnt=0;
    for(int i=0;i<4;i++){
        cnt+=m[i][i];
        
    }
    return 0;
}