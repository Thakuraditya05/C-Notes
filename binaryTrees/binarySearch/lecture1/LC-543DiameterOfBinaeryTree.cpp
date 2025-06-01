#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

// Definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// hrr node pe visit krna hai kyo ki This path may or may not pass through the root.
// 

// class Solution {
// public:
//     int maxDia=0; //ye hrr text case me change nahi hoti hai ek fixed ho gaya to baar baar re intialise and re declare nahi hota hai 

//     int  levels(TreeNode* root){
//         if(root==NULL)return 0;
//         return 1+ max(levels(root->left),levels(root->right));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root==NULL)return 0;
//         int dia =levels(root->left)+levels(root->right);
//         maxDia=max(maxDia,dia);
//         diameterOfBinaryTree(root->left);
//         diameterOfBinaryTree(root->right);
//         return maxDia;

//     }
// };


class Solution {
public:
    int maxDia=0; 
    int helper(TreeNode* root){
        if(root==NULL)return 0;
        int dia =levels(root->left)+levels(root->right);
        maxDia=max(maxDia,dia);
        helper(root->left);
        helper(root->right);
        return maxDia;
    }
    int  levels(TreeNode* root){
        if(root==NULL)return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;  //reinitialise
        return helper(root);

    }
};

class Solution {
public:
    int  levels(TreeNode* root){
        if(root==NULL)return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }
    int helper(TreeNode* root, int &maxDia){
        if(root==NULL)return 0;
        int dia =levels(root->left)+levels(root->right);
        maxDia=max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
        return maxDia;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;
        helper(root,maxDia);
        return maxDia;

    }
};





