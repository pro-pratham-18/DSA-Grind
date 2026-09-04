#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isSafe(vector<string>& board ,int r,int c,int n){

        for(int i=0;i<r;i++){
            if(board[i][c]=='Q') return false;
        }

        for(int i=r-1,j=c-1 ; j>=0 && i>=0; i--,j--){
            if(board[i][j]=='Q') return false;
        }
        for(int i=r-1,j=c+1 ; j<n && i>=0;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void nQueens(int i,vector<string>& board,vector<vector<string>>& ans,int n){
        if(i==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board,i,j,n)){
                board[i][j]='Q';
                nQueens(i+1,board,ans,n);
                board[i][j]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nQueens(0,board,ans,n);

        return ans;
    }
};


int main(){
    
    return 0;
}