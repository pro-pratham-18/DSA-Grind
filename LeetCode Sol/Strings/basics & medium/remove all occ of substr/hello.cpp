#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    string remove_occ(string& s,string& part){
        int n=s.size();
        int m=part.length();

        while(s.find(part) != string::npos){
            s.erase(s.find(part),m);
            n-=m;
        }
        return s;
    }
    string removeOccurrences(string s, string part) {
        return remove_occ(s,part);
    }
};



int main(){
    
    return 0;
}