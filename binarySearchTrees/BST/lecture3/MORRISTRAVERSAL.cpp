#include "../TreeNode.h"
// space complexity o(1)
// what is predicesor/ succsors  - >inorder predisors nikalo 
// if(current->left!=NULL)then find predisesor
// else { print (temp)  and call currnt->right }
//  
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)return {};
        vector<int>ans;
        TreeNode* curr=root;
        while(curr!=NULL){ 
            if(curr->left!=NULL){//find pred
                    TreeNode* pred=curr->left;
                    while(pred->right!=NULL && pred->right!=curr){
                        pred=pred->right;
                    }
                    if(pred->right==NULL){
                        pred->right=curr;
                        curr=curr->left;
                    }
                    if(pred->right==curr){ //unlucky
                        pred->right=NULL;
                        ans.push_back(curr->val);
                        curr=curr->right;
                    }
            }
            else { //curr->left==NULL
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
    }
};