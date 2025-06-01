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
// postoder is basically left right root but jb stacke me daal rahe hai 

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return {};
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()>0){
            TreeNode* temp =st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
            
        }
        reverse(ans.begin(), ans.end());
        return  ans;
    }
};




















