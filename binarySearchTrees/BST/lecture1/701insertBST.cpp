#include "../TreeNode.h"




class Solution {
public:
// we have two method to solve the prbleum 
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         if(root==NULL) return new TreeNode(val);
         else if(root->val>val){
            if(root->left==NULL){ // root->val <val go left 
                // attach here 
                root->left=new TreeNode(val);
            }
            else insertIntoBST(root->left,val);
         }
         else { // root->val <val go right 
            if(root->right==NULL){
                // attach here 
                root->right=new TreeNode(val);
            }
            else insertIntoBST(root->right,val);
         }
         return root;
    }
};

// improved version
class Solution {
public:
    void insert(TreeNode* root, int val){
           if(root->val>val){
            if(root->left==NULL){ // root->val <val go left 
                // attach here 
                root->left=new TreeNode(val);
            }
            else insertIntoBST(root->left,val);
         }
         else { // root->val <val go right 
            if(root->right==NULL){
                // attach here 
                root->right=new TreeNode(val);
            }
            else insertIntoBST(root->right,val);
         }
    } 
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        insert(root,val);
         return root;
    }
};


