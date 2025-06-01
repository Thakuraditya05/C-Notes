// step1 -->go left once 
// step ->keep going right

#include<iostream>
#include<climits>
using namespace std;
// Definition for a binary tree node.
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    TreeNode* iop(TreeNode* root){
        if(root->left==NULL)return NULL;
        TreeNode* pred=root->left;
        while(pred->right){
            pred=pred->right;
        }
        return pred;
    }

    TreeNode* ios(TreeNode* root){
        if(root->right==NULL)return NULL;
        TreeNode* succ=root->right;
        while(succ->left){
            succ=succ->left;
        }
        return succ;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        if(root->val==key) {  
            if(root->left==NULL && root->right==NULL)return NULL;
            if(root->left==NULL || root->right==NULL){
                if(root->left)return root->left;  
                if(root->right)return root->right;
            }
            if(root->left!=NULL && root->right!=NULL){
                // TreeNode* pred=iop(root);
                // root->val=pred->val;
                // root->left=deleteNode(root->left,pred->val);


                TreeNode* succ=ios(root);
                root->val=succ->val;
                root->right=deleteNode(root->right,succ->val);


            }
        }else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }else{ 
            root->right=deleteNode(root->right,key);
        }
        return root;
    }
};