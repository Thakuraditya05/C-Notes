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
    void displayPostOrder(TreeNode* root,vector<int> &ans){ 
    if(root==NULL)return ; 
    displayPostOrder(root->left,ans);
    displayPostOrder(root->right,ans);
    ans.push_back(root->val);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        displayPostOrder(root,ans);
        return ans;
    }
};