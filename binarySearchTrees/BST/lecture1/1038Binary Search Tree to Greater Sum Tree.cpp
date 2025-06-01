// issko ulte tarike se socho 
// agar bst is sorted array hota hai inorder form me to uske aage hmm ye kr skte hai ki 
// inoder me swap kr dun callings ko  
// apne se bade ka sum add ho raha hai->rlate it to inorder array
// suffix sum 

#include "../TreeNode.h"

// sufix aaray ki tarah socho iss baar 

class Solution {
public:
    int sum=0;
    void reverseInorder(TreeNode* root){
        // right root left
        // decreaseing order sorted array  
        if(root==NULL)return;
        reverseInorder(root->right);
        root->val+= sum; //8 (8+7) (15+6) () 
        sum=root->val; // 8 15
        reverseInorder(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};



