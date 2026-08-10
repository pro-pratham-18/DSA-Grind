//this is not a lc problem

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node*right;
    Node*left;

    Node(int data){
        val=data;
        right=left=NULL;
    }
};
void inorder(Node*root,vector<int>& nums){
    if(root==NULL) return ;
    inorder(root->left,nums);
    nums.push_back(root->val);
    inorder(root->right,nums);
}

vector <int> mergeSOrtedArr(vector<int>& nums1 ,vector<int>& nums2){
    vector<int> ans;
    int n1=nums1.size();
    int n2=nums2.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n1){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<n2){
        ans.push_back(nums2[j]);
        j++;
    }
    return ans;
}

Node* balancedBST(vector<int>& nums,int s,int e){
    if(s>e) return NULL;
    int mid=s+(e-s)/2;
    Node*root=new Node(nums[mid]);
    root->left=balancedBST(nums,s,mid-1);
    root->right=balancedBST(nums,mid+1,e);
    return root;
}

Node*mergeBST(Node*root1,Node*root2){
    vector<int>nums1;
    vector<int>nums2;
    inorder(root1,nums1);
    inorder(root2,nums2);
    auto ans=mergeSOrtedArr(nums1,nums2);
    int n=ans.size();
    int s=0;
    int e=n-1;
    return balancedBST(ans,s,e);
}
int main(){

    return 0;
}