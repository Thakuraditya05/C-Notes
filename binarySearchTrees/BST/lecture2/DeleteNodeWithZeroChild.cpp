// step1 -->go left once 
// step ->keep going right

#include<iostream>
#include<climits>
using namespace std;
// Definition for a binary tree node.
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//
TreeNode* iop(TreeNode* root){
    if(root->left==NULL)return NULL;
    TreeNode* pred=root->left;
    while(pred->right){
        pred=pred->right;
    }
    return pred;
}

TreeNode* ios(TreeNode* root){
    if(root->right==NULL)return NULL;
    TreeNode* succ=root->right;
    while(succ->left){
        succ=succ->left;
    }
    return succ;
}

TreeNode* deleteLeafNode(TreeNode* root, int key){
        if(root->val==key)return NULL;  //return NULL yani Node match ho gaya and delete kr diya 
        else if(root->val>key){ // go left 
            root->left=deleteLeafNode(root->left,key);
        }else{ // root->val<key : go right 
            root->right=deleteLeafNode(root->right,key);
        }
        return root;
}
TreeNode* deleteNodeHave1Child(TreeNode* root, int key){
        
        if(root->val==key) {//return root->left/root->right yani Node match ho gaya and delete kr diya 
            // if(root->left==NULL && root->right==NULL)return NULL;
            if(root->left)return root->left;
            if(root->right)return root->right;
        }   
        else if(root->val>key){ // go left 
            root->left=deleteNodeHave1Child(root->left,key);
        }else{ // root->val<key : go right 
            root->right=deleteNodeHave1Child(root->right,key);
        }
        return root;
}
TreeNode* deleteNodeHave2Child(TreeNode* root, int key){
        if(root->val==key) {//return root->left/root->right yani Node match ho gaya and delete kr diya 
            if(root->left!=NULL && root->right!=NULL){
                // replace the rrot with its inorder predisesor/succesor
                // delete pred/succ
                TreeNode* pred=iop(root);
                root->val=pred->val;
                root->left=deleteNodeHave1Child(root->left,pred->val);
            }
        }else if(root->val>key){ //go left 
            root->left=deleteNodeHave1Child(root->left,key);
        }else{ //root->val<key : go right 
            root->right=deleteNodeHave1Child(root->right,key);
        }
        return root;
}

// take the help of inorder predisocer and inorder succesor to delete Node With Child

int main(){
    // 
}