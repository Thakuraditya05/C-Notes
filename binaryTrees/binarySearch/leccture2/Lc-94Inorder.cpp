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
    void displayInOrder(TreeNode* root,vector<int> &ans){ 
    if(root==NULL)return ; 
    displayInOrder(root->left,ans);
    ans.push_back(root->val);
    displayInOrder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        displayInOrder(root,ans);
        return ans;
    }
};