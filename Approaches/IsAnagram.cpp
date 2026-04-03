#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector <int> v;
        v.assign(26,0);
        if(n!=m){
            return false;
        }
        else{
            for(char i:s){
                v[i-'a']++;
            }
            for(char j:t){
                v[j-'a']--;
            }
        }
        for(int i:v){
            if(i!=0){
                return false;
            }
        }
        return true;

    }
int main(){
    string a="hello";
    string b="olleh";
    bool c=isAnagram(a,b);
    cout<<c;
    return 0;
}
