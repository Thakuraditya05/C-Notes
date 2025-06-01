#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// root saame hona chahiye and and unke left subTree same hoona chahiye and rigth subtree same hona chahiye 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q!=NULL || p!=NULL && q==NULL) return false ;
        if(p==NULL && q==NULL)return true;
        if(p->val!=q->val)return false;
        bool left=isSameTree(p->left,q->left );
        if(!left)return false;
        bool right=isSameTree(p->right,q->right);
        if(!right)return false;
        return true;
    }
};


class Solution {
public:
    void helper(TreeNode* root){
         
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
         TreeNode* temp=root->left;
         root->left=root->right;
         root->right=temp;
         invertTree(root->left);
         invertTree(root->right);
        return root;
    }
};