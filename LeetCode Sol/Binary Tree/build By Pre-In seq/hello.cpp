
// class Solution {

// public:
//     int search(vector<int>nums,int left,int right,int val){
//         for(int i=left ;i<=right;i++){
//             if(nums[i]==val){
//                 return i;
//             }
//         }
//         return -1; 
//     }
//     TreeNode* helper(vector <int>& preorder, vector <int>& inorder,int &preIdx,int left ,int right){
//         if(right < left) return NULL;
//         TreeNode*root=new TreeNode(preorder[preIdx]);

//         int inIdx=search(inorder,left,right,preorder[preIdx]);
//         preIdx++;

//         root->left=helper(preorder,inorder,preIdx,left,inIdx-1);
//         root->right=helper(preorder,inorder,preIdx,inIdx+1,right);

//         return root;
//     }
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int preIdx=0;
//         return helper(preorder,inorder,preIdx,0,inorder.size()-1);
//     }
// };

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//search function for searching the node in the inorder sequence
int search(vector<int>& nums,int left , int right,int val ){
    for(int i=left;i<=right;i++){
        if(nums[i]==val){
            return i;
        }
    }
    return -1;
}

//helper function to build the tree 

Node*helper(vector<int>&preorder,vector <int>&inorder,int &preIdx,int left ,int right){
    if(right <left) return NULL;
    Node*root=new Node(preorder[preIdx]);
    int inIdx=search(inorder,left,right,preorder[preIdx]);
    preIdx++;

    root->left=helper(preorder,inorder,preIdx,left,inIdx-1);
    root->right=helper(preorder,inorder,preIdx,inIdx+1,right);

    return root;
}

Node*buildTree(vector<int>preorder,vector<int>inorder){
    int preIdx=0;
    return helper(inorder,preorder,preIdx,0,inorder.size()-1);
}
int main(){
    
    return 0;
}