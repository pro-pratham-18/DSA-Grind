#include<iostream>
#include<vector>

using namespace std;

int buy_sell_stock(vector <int> v){
    int profit=0;
    int n=v.size();
    int buy_price=v[0];
    for(int i=0;i<v.size();i++){
        int curr_profit=v[i]-buy_price;
        if(curr_profit>profit) profit=curr_profit;
        buy_price=min(buy_price,v[i]);
    }
    return profit;

    
}
int main(){
    vector <int> v={7,1,5,3,6,4};
    cout<<"Max Profit is:"<<buy_sell_stock(v);
    return 0;
}
