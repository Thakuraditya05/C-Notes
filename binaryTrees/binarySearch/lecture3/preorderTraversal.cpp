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
// preorder is basically root left right but jb stacke me daal rahe hai 
// root(print bhi krwa diya) fir uska right dala  and fir left dala    
// taki bahar jab nikale to ---->root left (last in 1st out)  right 
// 
// 
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return {};
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()>0){
            TreeNode* temp =st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
        return ans;
    }
};





















