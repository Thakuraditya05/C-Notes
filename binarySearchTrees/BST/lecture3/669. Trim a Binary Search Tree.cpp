#include "../TreeNode.h"
class Solution {
public:
    void trim(TreeNode* root, int lo, int hi){
        if(root==NULL)return;
        while(root->left!=NULL){
            if(root->left->val<lo)root->left=root->left->right;
            else if(root->left->val>hi)root->left=root->left->left;
            else break;
        }
        while(root->right!=NULL){
            if(root->right->val>hi)root->right = root->right->left;
            else if(root->right->val<lo)root->right=root->right->right;
            else break;
        }
        trim(root->right,lo,hi);
        trim(root->left,lo,hi);
    }
    TreeNode* trimBST(TreeNode* root, int lo, int hi) {
        TreeNode* dummy = new TreeNode(INT_MAX);
        dummy->left =root;
        trim(dummy,lo,hi);
        return dummy->left;
    }
};
