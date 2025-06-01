// hrr level ka right most prit hoga 
// level order traversing kr lo ek hi sided se 
// ans level pe ek ek pe of vector value ko update krte jaao bs 
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
            this->left=NULL;
            this->val=val;
            this->right=NULL;
    }
};

// uss elemnt ka sbse last elemnt ko print karanahai 
class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void nthLevel(TreeNode* root, int curr,int level, vector<int>&ans) { // root left right  1 2 4 8 5  9 10 3 6 11 7
        if (root == NULL)return; //
        if (curr == level) {
            ans[curr]=root->val;
            return;
        }
        nthLevel(root->left, curr + 1, level, ans);
        nthLevel(root->right, curr + 1, level, ans);
    }
    void levelOrder(TreeNode* root,vector<int>&ans ) {
        int n = levels(root);
        for (int i = 0; i < n; i++) {
            nthLevel(root, 0, i,ans);
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(levels(root),0);
        levelOrder(root,ans);
        return ans;
    }
};


//
// m2  by preorder
class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void preorder(TreeNode* root, vector<int>&ans, int level){
        if(root==NULL)return;
        ans[level]=root->val;
        preorder(root->left,ans,level+1);
        preorder(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(levels(root),0);
        preorder(root,ans,0);
        return ans;
    }
};