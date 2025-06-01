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
// node nikalo 

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return{};
        stack<TreeNode*>st; //stack bana liya 
        TreeNode* node=root; // temp assign root 
        while(st.size()>0 || node){ // stack khali hai and node null nahi hai 
            if(node){ // agar node nahi hai 
                st.push(node);
                node=node->left;  //left move krte jaao and root push krte jaao 

            } // node is null
            else{
                TreeNode* temp=st.top(); // agar pahla NULl mile to to jus pahel Node bahar nikalo 
                st.pop();
                ans.push_back(temp->val); // node ki value ush kao 
                node=temp->right; // and Nodeko Jump kara do 
            }
        }
        return ans;
    }
};


















