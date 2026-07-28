// class Solution {
// public:
//     int ans=0;
//     int diameterOfBinary(TreeNode* root){
//         if(root==NULL) return 0;
//         int lh=diameterOfBinary(root->left);
//         int rh=diameterOfBinary(root->right);
//         ans = max(ans,lh+rh);
//         int depth=max(lh,rh);
//         return depth+1;
//     }
//     int diameterOfBinaryTree(TreeNode* root){
//         diameterOfBinary(root);
//         return ans;
//     }
// };