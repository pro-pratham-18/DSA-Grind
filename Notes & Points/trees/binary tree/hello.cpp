#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

class Tree{
    Node*root;
public:
    Tree(){       //inserting the root Node 
        root=nullptr;
    }

    //insert at the left most node
    void insertLeft(int val){
        Node*newNode=new Node(val);
        if(root==NULL){
            root =newNode;
            return;
        }
        Node*temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        temp->left=newNode;
    }

    //delete the rightMost Node 

    void inserRight(int val){
        Node*newNode=new Node(val);
        if(root==NULL){
            root =newNode;
            return;
        }
        Node*temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->right=newNode;
    }

    void delright(){

    }
};

//building the tree using the preorder traversal 

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

//preorder traversal  (just tchange cout for other two traversals )

void preOrder(Node*root){
    if(root==NULL)return ;
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}

//level order traversal

//level order traversal (with newLine)


//height of a binary tree 
int levOrd_HofTree(Node*root){
    if(root==NULL)return -1;
    int height=0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                height++;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    return height;
}
int main(){
    vector <int> nums={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    auto it =BuildTree(nums);
    
    return 0;
}
