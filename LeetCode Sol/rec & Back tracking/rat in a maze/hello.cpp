#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
  public:
    void dfs(int i,int j,string dir,string& temp,vector<string>& ans,int n,vector<vector<int>>& maze,vector<vector<bool>>& vis){
        
        if(i<0 || j<0 || i>=n || j>=n|| maze[i][j]!=1 || vis[i][j] ){
            return ;
        }
        
        vis[i][j]=true;
        temp.append(dir);
        
        if(i==n-1 && j==n-1){
            ans.push_back(temp);
            temp.pop_back();
            vis[i][j]=false;
            return;
        }
        
        dfs(i-1,j,"U",temp,ans,n,maze,vis);
        dfs(i,j+1,"R",temp,ans,n,maze,vis);
        dfs(i+1,j,"D",temp,ans,n,maze,vis);
        dfs(i,j-1,"L",temp,ans,n,maze,vis);
        
        temp.pop_back();
        vis[i][j]=false;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n=maze.size();
        vector<string>ans;
        string temp="";
        string dir="";
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        dfs(0,0,dir,temp,ans,n,maze,vis);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
int main(){
    
    return 0;
}