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
// 
class Solution {
public:
    void helper(TreeNode* root){
         if(root==NULL) return;
         TreeNode* temp=root->left;
         root->left=root->right;
         root->right=temp;
         helper(root->left);
         helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};