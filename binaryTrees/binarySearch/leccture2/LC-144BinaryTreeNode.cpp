 #include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    void displayPreOrder(TreeNode* root,vector<int> &ans){  // root left right  1 2 4 8 5  9 10 3 6 11 7 
    if(root==NULL)return ; 
    ans.push_back(root->val);
    displayPreOrder(root->left,ans);
    displayPreOrder(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        displayPreOrder(root,ans);
        return ans;
    }
};