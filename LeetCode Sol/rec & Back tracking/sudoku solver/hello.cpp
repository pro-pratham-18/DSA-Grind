
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool isSafe(int r,int c,char dig,vector<vector<char>>& board){

        for(int i=0;i<9;i++){
            if(board[i][c]==dig) return false;
        }
        for(int i=0;i<9;i++){
            if(board[r][i]==dig) return false;
        }
        int sr=(r/3)*3;
        int sc=(c/3)*3;

        for(int i=sr;i<=sr+2;i++){
            for(int j=sc;j<=sc+2;j++){
                if(board[i][j]==dig) return false;
            }
        }
        return true;
    }
    bool sudoku(vector<vector<char>>& board,int r,int c){
        if(r==9){
            return true;
        }
        int nr=r;
        int nc=c+1;
        if(nc==9){
            nr=r+1;
            nc=0;
        }   

        if(board[r][c]!='.'){
            return sudoku(board,nr,nc);
        }

        for(int i=1;i<=9;i++){
            char dig='0'+i;
            if(isSafe(r,c,dig,board)){
                board[r][c]=dig;
                if(sudoku(board,nr,nc)) return true;
                board[r][c]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool a=sudoku(board,0,0);
    }
};


int main(){
    
    return 0;
}