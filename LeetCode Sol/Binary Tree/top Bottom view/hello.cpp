// it is a standard approach code not a lc solution
//this ques not on lc

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

// top view of a tree 
vector<int>top_of_tree(Node*root){
    vector<int>top;
    if(root==NULL) return {};
    map<int,Node*>mp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        Node*curr=q.front().first;
        int d=q.front().second;
        q.pop();
        mp.emplace(d,curr);
        if(curr->left!=NULL){
            q.push({curr->left,d-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,d+1});
        }
    }
    for(auto i:mp){
        top.push_back(i.second->val);
    }
    return top ;
}


int main(){
    vector<int> preorder ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node*root=BuildTree(preorder);
    auto it=top_of_tree(root);
    for(auto i:it){
        cout<<i<<" ";
    }
    return 0;
}

//for bottom view , just change the emplace(d,curr) with mp[d]=curr;

