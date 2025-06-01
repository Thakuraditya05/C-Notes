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
int main(){
    // 
}