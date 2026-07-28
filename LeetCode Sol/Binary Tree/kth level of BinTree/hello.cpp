#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
public:
    int val;
    Node*right;
    Node*left;

    Node(int data){
        val=data;
        right=NULL;
        left=NULL;
    }
};

//function to build a tree using preorder sequence

int idx=-1;
Node* BuildTree(vector <int>& nums){
    idx++;
    if(nums[idx]==-1){
        return NULL; 
    }
    Node*root=new Node(nums[idx]);
    root->left=BuildTree(nums);
    root->right=BuildTree(nums);

    return root;
}

// recursive function for the kth level
// printing the kth level elments                        // considering the level starts from 0

void kth_level(Node*root,int k){
    if(root==NULL) return ;
    if(k==0){
        cout<<root->val<<" ";
        return;
    }
    kth_level(root->left,k-1);
    kth_level(root->right,k-1);
}
int main(){
    vector<int> preorder ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*root=BuildTree(preorder);
    kth_level(root,0);
}