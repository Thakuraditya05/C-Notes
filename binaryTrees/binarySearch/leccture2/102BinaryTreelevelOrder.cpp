#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
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

class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void nthLevel(TreeNode*root, int curr,int level,vector<int> &v) { // root left right  1 2 4 8 5  9 10 3 6 11 7
        if (root == NULL) return ;
        if (curr == level) {
            v.push_back(root->val);
            return;
        }
        nthLevel(root->left, curr + 1, level,v);
        nthLevel(root->right, curr + 1, level,v);
    }    
    void lOrder(TreeNode * root, vector<vector<int>> &ans) {
            int n = levels(root);
            for(int i=1;i<=n;i++){
            vector<int>v;
            nthLevel(root,1,i,v);
            ans.push_back(v);
            cout<<endl;
            }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
       lOrder(root,ans);
       return ans;
    }
};



// after some modification

class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }   
    void lOrder(TreeNode * root, vector<vector<int>> &ans, int level) {
            if(root==NULL)return;
           ans[level].push_back(root->val);
           lOrder(root->left,ans,level+1);
           lOrder(root->right,ans,level+1);
           
           
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=levels(root);
       vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            vector<int>v;
            ans.push_back(v);
        }
       lOrder(root,ans,0);
       return ans;
    }
};