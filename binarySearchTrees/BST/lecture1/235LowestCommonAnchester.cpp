#include "../TreeNode.h"
// this was according the defination 
class Solution {
public:
    int maxTree(TreeNode* root){
        if(root==NULL) return INT_MIN;
        return max(root->val,max(maxTree(root->left),maxTree(root->right)));

    }
    int minTree(TreeNode* root){
        if(root==NULL) return INT_MAX;
        return min(root->val,min(minTree(root->left),minTree(root->right)));
        
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return  true;
        else if(root->left==NULL && root->right==NULL)return true;
        else if(root->val<=maxTree(root->left))return false;
        else if(root->val>=minTree(root->right))return false;
        else return isValidBST(root->left) && isValidBST(root->right);



    }
};



// imp

class Solution {
public:
    long long  maxTree(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));

    }
    long long minTree(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
        
    }
    bool isValidBST(TreeNode* root) {
        if((root==NULL) ||  (root->left==NULL && root->right==NULL))return  true; // ek baar ye add kkaro orr ek baar ye mt adda karo and see time comple -->(root->left==NULL && root->right==NULL)
        else if((long long)(root->val)<=maxTree(root->left)  ||  (long long)(root->val)>=minTree(root->right) )return false;
        else return isValidBST(root->left) && isValidBST(root->right);
    }
};



// inodertraversal is sorted in nature

//     TreeNode* prev=NULL;
//     bool flag=true; 
class Solution {
public:
    
    void inorder(TreeNode* root,bool &flag,TreeNode* &prev){ // noo
        if(root==NULL)return ;
        inorder(root->left,flag,prev);
        if(prev!=NULL){
            if(root->val<=prev->val){
                flag=false;
                return;
            }
        }
        prev=root;
        inorder(root->right,flag,prev);

    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev=NULL;
        bool flag=true;
        inorder(root,flag,prev);
        return flag;
    }
};
// we can make global variable of of falg and prev;