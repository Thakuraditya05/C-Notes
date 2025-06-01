#include "../TREENODE.h";

// m3;
class Solution {
public:
    void flatten(TreeNode* root) {
       if(root==NULL)return;
       TreeNode* curr=root;
       while(curr!=NULL){
            if(curr->left!=NULL){
            // save the right 
            TreeNode* r=curr->right;
            curr->right=curr->left;
            // finding pred
            TreeNode* pred=curr->left;
            while(pred->right!=NULL)pred=pred->right;
            // link
            pred->right =r;
            curr=curr->left;

            }
            else{
                curr=curr->right;

            }
        }
        TreeNode* temp=root;
        while(temp->right!=NULL){
            temp->left=NULL;
            temp=temp->right;
      }
    }
};


// m2
class Solution {
public:
    vector<TreeNode*> preorderTraversal(TreeNode* root){
        vector<TreeNode*>ans;
        stack<TreeNode*>st;
        if(root!=NULL)st.push(root);

        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp);
            if(temp->right!=NULL)st.push(temp->right); // right ko pahle call kr lo 
            if(temp->left!=NULL)st.push(temp->left);
        }
        return ans;
    }

    void flatten(TreeNode* root) {
        if(root==NULL)return;
       vector<TreeNode*>ans=preorderTraversal(root);
        int n=ans.size();
        for(int i=0;i<n-1;i++){
            ans[i]->right=ans[i+1];
            ans[i]->left=NULL;
        }

    }
};


// m1
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        TreeNode* l=root->left;
        TreeNode* r=root->right;
        root->left=NULL;
        root->right=NULL;
        flatten(l);
        flatten(r);
        root->right=l;
        TreeNode* temp=root;
        while(temp->right!=NULL)temp=temp->right;
        temp->right=r;
    }
};





